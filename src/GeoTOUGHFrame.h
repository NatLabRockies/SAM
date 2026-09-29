#ifndef GEOTOUGHFRAME_H
#define GEOTOUGHFRAME_H


#include <wx/wx.h>
#include <windows.h>
#include <string>
#include <vector>
#include "object.h"


// --- Main application Window ---
class GeoTOUGHFrame : public wxDialog {
public:
    GeoTOUGHFrame(wxWindow* parent, const wxString& title = "GeoTOUGH Multi-Physics Simulation Studio",
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxSize(1024, 768));
    virtual ~GeoTOUGHFrame() {};

    matrix_t<double> GetResults() { return m_results; }

private:

    void TestData(std::wstring absoluteJsonPath);
    void RunExample7Simulation(std::wstring absoluteJsonPath);
    void OnRunTask(wxCommandEvent& event);
    void OnProgressTick(wxThreadEvent& event);
    void OnThreadCompletion(wxThreadEvent& event);
    void ExportSimulationReport(const std::wstring& filename,
                                                const std::vector<double>& timeSteps, 
                                                const std::vector<double>& temperatures, 
                                                const std::vector<double>& pressures);

    wxButton* m_runButton;
    wxGauge* m_progressBar;
    wxTextCtrl* m_outputText;

	matrix_t<double> m_results;
};

#endif // GEOTOUGHFRAME_H
