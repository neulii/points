#include "mainWindow.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    testButton = new wxButton(panel, ID_EXIT, wxT("Quit"), wxPoint(20, 20));
    newButton = new wxButton(panel, ID_NEWBUTTON, wxT("NewButton"), wxPoint(20, 60));
    inputText = new wxTextCtrl(panel, ID_TEXTINPUT, wxT("super"), wxPoint(100, 100));


    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H", "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets' Hello world sample", "About Hello World", wxOK | wxICON_EXCLAMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void MyFrame::QuitButton(wxCommandEvent& event)
{
    //wxMessageBox(inputText->GetValue(), "This is what you writed in box", wxOK | wxICON_EXCLAMATION);
    SetStatusText("super");

    std::cout << "das ist nur ein kleiner test" << std::endl;
    //noch ein test
    std::cout << "super" << std::endl;



}

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(ID_Hello, MyFrame::OnHello)
    EVT_MENU(wxID_EXIT, MyFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    EVT_BUTTON(ID_NEWBUTTON, MyFrame::QuitButton)
    EVT_BUTTON(ID_EXIT, MyFrame::OnExit)
wxEND_EVENT_TABLE()

