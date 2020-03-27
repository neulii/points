#include "newGameWindow.h"

NewGameWindow::NewGameWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
	:wxDialog(NULL, wxID_ANY, title, pos, size)

{
	 
	wxPanel* panel = new wxPanel(this, wxID_ANY);

	wxStaticText* numberPlayersText = new wxStaticText(this, wxID_ANY, "Anzahl Spieler", wxPoint(20, 20));

	wxArrayString choices;
	choices.Add("2");
	choices.Add("3");

	wxChoice* numberOfPlayers = new wxChoice(this, wxID_ANY, wxPoint(100, 20), wxSize(50, 20),choices);
	numberOfPlayers->Select(0);

	this->Center();
}

void NewGameWindow::OnClose(wxCloseEvent& event)
{
	Destroy();
}

wxBEGIN_EVENT_TABLE(NewGameWindow, wxDialog)
	EVT_CLOSE(NewGameWindow::OnClose)

wxEND_EVENT_TABLE()