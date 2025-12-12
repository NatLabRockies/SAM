Web Access and Proxies
======================

SAM uses your computer’s default internet access settings to communicate with websites using either the HTTP or HTTPS communications protocols. SAM communicates with websites to download weather files, electricity rate data, to display information from or hypertext links from the SAM website, and to :doc:`collect software usage data <registration>`.

Website Addresses 
~~~~~~~~~~~~~~~~~~

The following is a list of all of the URLs that SAM may use. You can find this list for the version of SAM you are using in the runtime/webapis.conf file in your SAM :ref:`installation folder <installationfolder>`.

https://sam.nrel.gov/sites/default/files/content/mobile/android/readme.html

https://scenarioviewer.nrel.gov/api/project/detail/?uuid=0f92fe57-3365-428a-8fe8-0afc326b3b43

https://cambium.nrel.gov/api/load_data/

https://sam.nrel.gov/sites/default/files/content/mobile/ios/readme.html

https://sam.nrel.gov/support

https://developer.nrel.gov/api/nsrdb/v2/solar/nsrdb-data-query.json?&api_key=<SAMAPIKEY>&wkt=POINT(<LON>%20<LAT>)

https://nrel.github.io/SAM/doc/releasenotes.html

https://developer.nrel.gov/api/reopt/v1/job/<RUN_UUID>/results/?api_key=<SAMAPIKEY>

https://developer.nrel.gov/api/reopt/v1/job?format=json&api_key=<SAMAPIKEY>

mailto:sam.support@nrel.gov

https://en.openei.org/w/index.php?title=Special:Ask&q=<QUESTION>&po=<PROPERTIES>&eq=yes&p[format]=json

https://api.openei.org/utility_companies?version=3&format=json&api_key=<SAMAPIKEY>&scope=<SCOPE>

https://developer.nrel.gov/api/utility_rates/v3.json?api_key=<SAMAPIKEY>&address=<ADDRESS>

https://api.openei.org/utility_rates?version=8&format=json&limit=<LIMIT>&detail=<DETAIL>&offset=<OFFSET>&ratesforutility=<UTILITYNAME>&getpage=<GUID>&api_key=<APIKEY>

https://en.openei.org/apps/IURDB

https://developer.nrel.gov/api/wave/v2/wave/us-west-coast-hindcast-download.csv?api_key=<SAMAPIKEY>&wkt=POINT(<LON>%20<LAT>)&interval=180&email=<USEREMAIL>&attributes=significant_wave_height,energy_period&names=<YEAR>

https://developer.nrel.gov/api/wave/v2/wave/us-atlantic-hindcast-download.csv?api_key=<SAMAPIKEY>&wkt=POINT(<LON>%20<LAT>)&interval=180&email=<USEREMAIL>&attributes=significant_wave_height,energy_period&names=<YEAR>

https://developer.nrel.gov/api/wave/v2/wave/hawaii-hindcast-download.csv?api_key=<SAMAPIKEY>&wkt=POINT(<LON>%20<LAT>)&interval=180&email=<USEREMAIL>&attributes=significant_wave_height,energy_period&names=<YEAR>

https://sam.nrel.gov

https://developer.nrel.gov/api/wind-toolkit/wind/wtk_srw_download?year=<YEAR>&lat=<LAT>&lon=<LON>&hubheight=<HUBHEIGHT>&api_key=<SAMAPIKEY>&email=<USEREMAIL>

Proxy Server Configuration
~~~~~~~~~~~~~~~~~~~~~~~~~~

If your organization uses a web proxy server to connect to the internet, and you are having trouble registering SAM or accessing online databases from SAM, you may need to create a proxy configuration file. The file is a one-line text file with one proxy server address and an optional custom port. 

To create a proxy configuration file:

#. Start SAM.

#. When you see the registration window, click Proxies.

#. Type the your organization's web proxy server address. For example if the proxy server address is "proxy-server.myorganization.org", type:

```proxy-server.myorganization.org```

To specify a custom port, add it to the name with a colon separator (no spaces). For example, if the custom port number is 9142:

 ```proxy-server.myorganization.org:9142```

The next time you start SAM, it will use the proxy server address to access the internet. You can ch

SAM stores this proxy address in a text file named proxy.txt in the :ref:`SAM installation folder <installationfolder>`. It contains a single line with the proxy server address and optional custom port.

If you use your computer with different internet connections, and not all connections use a proxy server, or they use different proxy servers, you can change the proxy configuration by following the steps above. Delete the proxy server address to connect directly with no proxy server.