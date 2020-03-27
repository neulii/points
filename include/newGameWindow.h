#ifndef NEWGAMEWINDOW_H
#define NEWGAMEWINDOW_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class NewGameWindow :
	public wxDialog
{

public:
	NewGameWindow(const wxString& title, const wxPoint& pos, const wxSize& size);

	void OnClose(wxCloseEvent& event);

private:



	wxDECLARE_EVENT_TABLE();

};

enum newGameWindowIDs
{
	ID_NumberOfPlayers = 11
};

#endif // !NEWGAMEWINDOW_H