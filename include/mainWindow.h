#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "game.h"

class MainWindow : public wxFrame
{
public:
    MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);
private:

    Game* game;

   /* wxButton* testButton;
    wxButton* newButton;
    wxTextCtrl* inputText;*/

 
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void SaveGame(wxCommandEvent& event);
    void OpenGame(wxCommandEvent& event);
   
    wxDECLARE_EVENT_TABLE();
};

//id's for wxcomponents

enum id
{
    ID_NewGame = 1,
    ID_SaveGame = 2,
    ID_OpenGame = 3,
    ID_Exit = 4,
    ID_Info = 5
  /*  ID_NEWBUTTON = 2,
    ID_TEXTINPUT = 3,*/
    //ID_EXIT
};

