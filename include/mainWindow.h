#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:

    wxButton* testButton;
    wxButton* newButton;
    wxTextCtrl* inputText;

    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void QuitButton(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};

enum
{
    ID_Hello = 1,
    ID_NEWBUTTON = 2,
    ID_TEXTINPUT = 3,
    ID_EXIT
};

