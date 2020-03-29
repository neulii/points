#ifndef NEWGAMEWINDOW_H
#define NEWGAMEWINDOW_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "inputPanel.h"

class NewGameWindow :
	public wxDialog
{

public:
	NewGameWindow(const wxString& title, const wxPoint& pos, const wxSize& size);

	void OnClose(wxCloseEvent& event);
	void SelectedNumberOfPlayersChoice(wxCommandEvent& event);

	void setGuiPlayers(int playerNumber);

private:
	int newNumberOfPlayers = 2;
	
	wxChoice* numberOfPlayers;					//field to select number of players
	std::vector<wxStaticText*> playerLabels;	//the names: player 1, player 2, ....
	std::vector<wxTextCtrl*> nameInputFields;	//the name input fields

	wxPanel* panelPlayers;

	wxDECLARE_EVENT_TABLE();

};

enum newGameWindowIDs
{
	ID_NumberOfPlayers = 11
};

#endif // !NEWGAMEWINDOW_H