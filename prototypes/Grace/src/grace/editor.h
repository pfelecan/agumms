
#pragma once

#include <wx/wx.h>

#include <wx/stc/stc.h>

wxDECLARE_EVENT(STC_STATUS_CHANGED, wxCommandEvent);

class Editor : public wxStyledTextCtrl {
public:
    Editor(wxWindow* parent);

private:
    void DoSetFoldLevels(unsigned fromPos, int startLevel, wxString& text);
    void DoSetStyling(unsigned fromPos, unsigned toPos, wxString &text);
    void OnMarginClick(wxStyledTextEvent& event);
    void OnModified(wxStyledTextEvent& event);
    void OnStyleNeeded(wxStyledTextEvent& event);

    bool modified_;
};
