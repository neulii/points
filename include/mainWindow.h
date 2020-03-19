#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MainWindow : public wxFrame
{
public:
    MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);
private:

   /* wxButton* testButton;
    wxButton* newButton;
    wxTextCtrl* inputText;*/

    //void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    //void QuitButton(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};

enum
{
    /*ID_Hello = 1,
    ID_SUPER = 2,*/
  /*  ID_NEWBUTTON = 2,
    ID_TEXTINPUT = 3,*/
    //ID_EXIT
};

