#include "mainWindow.h"

MainWindow::MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxPanel* panel = new wxPanel(this, wxID_ANY);

  /*  testButton = new wxButton(panel, ID_EXIT, wxT("Quit"), wxPoint(20, 20));
    newButton = new wxButton(panel, ID_NEWBUTTON, wxT("NewButton"), wxPoint(20, 60));
    inputText = new wxTextCtrl(panel, ID_TEXTINPUT, wxT("super"), wxPoint(100, 100));*/


    wxMenu* menuFile = new wxMenu;
  
    menuFile->Append(ID_NewGame, "Neues Spiel", "Startet ein Neues Spiel");
    menuFile->Append(ID_SaveGame, "Speichern", "Speichert das bestehende Spiel");
    menuFile->Append(ID_OpenGame, "Öffnen", "Öffnet ein Spiel");


    //menuFile->AppendSeparator();
    menuFile->Append(ID_Exit,"Beenden", "Beendet das Programm");
    
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(ID_Info,"Info", "Blendet das Info Feld ein ;)");

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&Datei");
    menuBar->Append(menuHelp, "&Info");
    SetMenuBar(menuBar);
    
    CreateStatusBar();
    //SetStatusText("Welcome to wxWidgets!");

    Centre();

}
void MainWindow::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void MainWindow::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("Dieses Programm dient zum Zählen von Punkten beim Römön ;)", "...nur zur Info...", wxOK | wxICON_INFORMATION);
}

//void MainWindow::OnHello(wxCommandEvent& event)
//{
//    wxLogMessage("Hello world from wxWidgets!");
//}

//void MainWindow::QuitButton(wxCommandEvent& event)
//{
//    //wxMessageBox(inputText->GetValue(), "This is what you writed in box", wxOK | wxICON_EXCLAMATION);
//    SetStatusText("super");
//
//    std::cout << "das ist nur ein kleiner test" << std::endl;
//    //noch ein test
//    std::cout << "super" << std::endl;
//
//
//
//}

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
 
    EVT_MENU(ID_Exit, MainWindow::OnExit)
    EVT_MENU(ID_Info, MainWindow::OnAbout)
  /*  EVT_BUTTON(ID_NEWBUTTON, MainWindow::QuitButton)
    EVT_BUTTON(ID_EXIT, MainWindow::OnExit)*/
wxEND_EVENT_TABLE()

