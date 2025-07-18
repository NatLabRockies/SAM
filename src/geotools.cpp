/*
BSD 3-Clause License

Copyright (c) Alliance for Sustainable Energy, LLC. See also https://github.com/NREL/SAM/blob/develop/LICENSE
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <wx/wx.h>

#include <wex/easycurl.h>

#include <rapidjson/reader.h>
#include <rapidjson/error/en.h> // parser errors returned as char strings

#include "main.h"
#include "geotools.h"

/*
static wxString MyGet(const wxString& url)
{
    wxEasyCurl curl;
    curl.AddHttpHeader("Content-type: text/plain");
    curl.AddHttpHeader("Cache-Control: no-cache");
    curl.Get(url);
    return curl.GetDataAsString();
}
*/
// Geocode using Google API for non-NREL builds of SAM
bool GeoTools::GeocodeGoogle(const wxString& address, double* lat, double* lon, double* tz, bool showprogress) {
    wxBusyCursor _curs;

    bool success = false;

    wxString plusaddr = address;
    plusaddr.Replace(", ", "+");
    plusaddr.Replace(",", "+");
    plusaddr.Replace("   ", " ");
    plusaddr.Replace("  ", " ");
    plusaddr.Replace(" ", "+");
   
    // Get lat/lon from Google geocoding API
    wxString url = SamApp::WebApi("google_geocode_api");
    url = url + "&address=";
    url = url + plusaddr;
    url.Replace("<GOOGLEAPIKEY>", wxString(google_api_key));

    wxEasyCurl curl;
    wxBusyCursor curs;
    if (showprogress) {
        if (!curl.Get(url, "Geocoding address '" + address + "'..."))
            return false;
    }
    else {
        if (!curl.Get(url))
            return false;
    }

    // change from UTF8 to UTF16 encoding to address unicode characters per SAM GitHub issue 1848
    rapidjson::GenericDocument < rapidjson::UTF16<> > reader;
    wxString str = curl.GetDataAsString();
    reader.Parse(str.c_str());

    if (!reader.HasParseError()) {
        if (reader.HasMember(L"results")) {
            if (reader[L"results"].IsArray()) {
                if (reader[L"results"][0].HasMember(L"geometry")) {
                    if (reader[L"results"][0][L"geometry"].IsArray()) {
                        if (reader[L"results"][0][L"geometry"][0].HasMember(L"location")) {
                            if (reader[L"results"][0][L"geometry"][0][L"location"].HasMember(L"lat")) {
                                if (reader[L"results"][0][L"geometry"][0][L"location"][L"lat"].IsNumber()) {
                                    *lat = reader[L"results"][0][L"geometry"][0][L"location"][L"lat"].GetDouble();
                                    success = true;
                                }
                            }
                            if (reader[L"results"][0][L"geometry"][0][L"location"].HasMember(L"lng")) {
                                if (reader[L"results"][0][L"geometry"][0][L"location"][L"lng"].IsNumber()) {
                                    *lon = reader[L"results"][0][L"geometry"][0][L"location"][L"lng"].GetDouble();
                                    success &= true;
                                }
                            }
                        }
                    }
                }
            }
        }
        // check status code
        success = false;//overrides success of retrieving data

        success = false;//overrides success of retrieving data

        if (reader.HasMember(L"status")) {
            if (reader[L"status"].IsString()) {
                str = reader[L"status"].GetString();
                success = str.Lower() == "ok";
            }
        }
    }

    if (!success)
        return false;


    if (tz != 0) {
        success = false;

        // get timezone from Google timezone API
        url = SamApp::WebApi("google_timezone_api") + wxString::Format("&location=%.14lf,%.14lf", *lat, *lon);
        url.Replace("<GOOGLEAPIKEY>", wxString(google_api_key));

        bool ok;
        if (showprogress)
            ok = curl.Get(url, "Geocoding address...");
        else
            ok = curl.Get(url);


        str = curl.GetDataAsString();
        reader.Parse(str.c_str());

        if (!reader.HasParseError()) {
            if (reader.HasMember(L"rawOffset")) {
                if (reader[L"rawOffset"].IsNumber()) {
                    *tz = reader[L"rawOffset"].GetDouble() / 3600.0;
                    success = true;
                }
                else if (reader[L"rawOffset"].IsInt()) {
                    *tz = reader[L"rawOffset"].GetInt() / 3600.0;
                    success = true;
                }
            }
        }
    
        // check status code
        success = false;//overrides success of retrieving data

        if (reader.HasMember(L"status")) {
            if (reader[L"status"].IsString()) {
                str = reader[L"status"].GetString();
                success = str.Lower() == "ok";
            }
        }
    }
    
    return success;

}

// Geocode using NREL Developer API (MapQuest) for NREL builds of SAM
bool GeoTools::GeocodeDeveloper(const wxString& address, double* lat, double* lon, double* tz, bool showprogress) {
    wxBusyCursor _curs;

    bool success = false;

    wxString plusaddr = address;
    plusaddr.Replace(", ", "+");
    plusaddr.Replace(",", "+");
    plusaddr.Replace("   ", " ");
    plusaddr.Replace("  ", " ");
    plusaddr.Replace(" ", "+");

    wxString url = SamApp::WebApi("nrel_geocode_api") + "&location=" + plusaddr;
    url.Replace("<GEOCODEAPIKEY>", wxString(geocode_api_key));

    wxEasyCurl curl;
    wxBusyCursor curs;
    
    // SAM issue 1968 
    curl.AddHttpHeader("Content-Type: application/json");
    curl.AddHttpHeader("Accept: application/json");

    if (showprogress) {
        if (!curl.Get(url, "Geocoding address '" + address + "'..."))
            return false;
    }
    else {
        if (!curl.Get(url))
            return false;
    }
 
    // change from UTF8 to UTF16 encoding to address unicode characters per SAM issue 1848
    rapidjson::GenericDocument < rapidjson::UTF16<> > reader;
    wxString str = curl.GetDataAsString();

    rapidjson::ParseResult ok = reader.Parse(str.c_str());

    if (!reader.HasParseError()) {
        if (reader.HasMember(L"results")) {
            if (reader[L"results"].IsArray()) {
                if (reader[L"results"][0].HasMember(L"locations")) {
                    if (reader[L"results"][0][L"locations"].IsArray()) {
                        if (reader[L"results"][0][L"locations"][0].HasMember(L"latLng")) {
                            if (reader[L"results"][0][L"locations"][0][L"latLng"].HasMember(L"lat")) {
                                if (reader[L"results"][0][L"locations"][0][L"latLng"][L"lat"].IsNumber()) {
                                    *lat = reader[L"results"][0][L"locations"][0][L"latLng"][L"lat"].GetDouble();
                                    if (reader[L"results"][0][L"locations"][0][L"latLng"].HasMember(L"lng")) {
                                        if (reader[L"results"][0][L"locations"][0][L"latLng"][L"lng"].IsNumber()) {
                                            *lon = reader[L"results"][0][L"locations"][0][L"latLng"][L"lng"].GetDouble();
                                            success = true; // only if lat and lon are numbers
                                        }
                                    }

                                }
                            }
                         }
                    }
                }
            }
        }
/*        // check status code
        success = false;//overrides success of retrieving data

        if (reader.HasMember(L"info")) {
            if (reader[L"info"].HasMember(L"statuscode")) {
                if (reader[L"info"][L"statuscode"].IsInt()) {
                    success = reader[L"info"][L"statuscode"].GetInt() == 0;
                }
            }
        }
*/  
    }
    else {
        wxMessageBox(rapidjson::GetParseError_En(ok.Code()), "geocode developer parse error ");
    }

    if (!success)
        return false;

    // time zone is optional
    if (tz != 0) 
    {
        success = false;

        curl = wxEasyCurl();

        // azure maps time zone api
        url = SamApp::WebApi("azure_maps_timezone_api");
        url.Replace("<LATLON>", wxString::Format("%.14lf,%.14lf", *lat, *lon));
        url.Replace("<AZUREAPIKEY>", wxString(azure_api_key));

        curl.AddHttpHeader("Content-Type: application/json");
        curl.AddHttpHeader("Accept: application/json");

        if (showprogress) {
            curl.Get(url, "Getting time zone '" + address + "'...");
        }
        else {
            curl.Get(url);
        }

        str = curl.GetDataAsString();

        reader.Parse(str.c_str());

        if (reader.HasMember(L"error")) {
            if (reader[L"error"].HasMember(L"code")) {
                if (reader[L"error"][L"code"].IsString()) {
                    wxString error_str = reader[L"error"][L"code"].GetString();
                    if (error_str.Lower() != "") {
                        wxMessageBox(wxString::Format("Time Zone API Error!\n%s", error_str));
                        return false;
                    } 
                }
            }
        }

        *tz = NULL;
        if (!reader.HasParseError()) {
            if (reader.HasMember(L"TimeZones")) {
                if (reader[L"TimeZones"].IsArray()) {
                    if (reader[L"TimeZones"][0].HasMember(L"ReferenceTime")) {
                        if (reader[L"TimeZones"][0][L"ReferenceTime"].HasMember(L"StandardOffset")) {
                            if (reader[L"TimeZones"][0][L"ReferenceTime"][L"StandardOffset"].IsString()) {
                                wxString stz = reader[L"TimeZones"][0][L"ReferenceTime"][L"StandardOffset"].GetString();
                                wxArrayString as = wxSplit(stz, ':');
                                if (as.Count() != 3) return false; // example "-08:00:00"
                                if (!as[0].ToDouble(tz)) return false;
                                double offset = 0;
                                if (as[1] == "30") offset = 0.5;
                                if (*tz < 0)
                                    *tz = *tz - offset;
                                else
                                    *tz = *tz + offset;
                                success = true;
                            }
                        }
                    }
                }
            }
        }
        else { // parse error
            wxMessageBox(wxString::Format("Time Zone API Error!\nFailed to parse response."));
            success = false;
        }
    }
    return success;
 }


wxBitmap GeoTools::StaticMap(double lat, double lon, int zoom, MapProvider service) {

    rapidjson::GenericDocument < rapidjson::UTF16<> > reader;
    wxString str;

    // Azure get static map documentation https://learn.microsoft.com/en-us/rest/api/maps/render/get-map-static-image
    // valid zoom range is 0-19 for tilesetId = microsoft.imagery 
    if (zoom > 19) zoom = 21;
    if (zoom < 0) zoom = 0;
    wxString zoomStr = wxString::Format("%d", zoom);

    wxString url;
    if (service == GOOGLE_MAPS) {
        url = SamApp::WebApi("google_static_map_api");
        url.Replace("<POINT>", wxString::Format("%.14lf,%.14lf", lat, lon));
        url.Replace("<ZOOM>", zoomStr);
        url.Replace("<GOOGLEAPIKEY>", wxString(google_api_key));

    }
    else {
        url = SamApp::WebApi("azure_maps_static_map_api");
        url.Replace("<POINT>", wxString::Format("%.14lf,%.14lf", lat, lon));
        url.Replace("<ZOOMLEVEL>", zoomStr);
        url.Replace("<LONLAT>", wxString::Format("%.14lf,%.14lf", lon, lat));
        url.Replace("<AZUREAPIKEY>", wxString(azure_api_key));
    }

    wxEasyCurl curl;

    curl.AddHttpHeader("Accept: image/png");

    bool ok = curl.Get(url, "Obtaining aerial imagery...");

    str = curl.GetDataAsString();
    reader.Parse(str.c_str());

    // curl Get failed
    if (!ok) {
        wxMessageBox("Static Map Error!\nFailed to download static map.");
        return wxNullBitmap;
    }

    str = curl.GetDataAsString();
    // returned JSON string instead of image, probably an error message
    if (str != "") {
        reader.Parse(str.c_str());
        if (reader.HasMember(L"error")) {
            if (reader[L"error"].HasMember(L"message")) {
                if (reader[L"error"][L"message"].IsString()) {
                    wxMessageBox(wxString::Format("Static Map Error!\n%s", reader[L"error"][L"message"].GetString()));
                    return wxNullBitmap;
                }
            }
            wxMessageBox(wxString::Format("Static Map Error!\n%s", reader[L"error"][L"code"].GetString()));
            return wxNullBitmap;
        }
        wxMessageBox(wxString::Format("Static Map Error!\nNo map image."));
        return wxNullBitmap;
    }
    else {
        return ok ? wxBitmap(curl.GetDataAsImage(wxBITMAP_TYPE_PNG)) : wxNullBitmap;
    }
}
