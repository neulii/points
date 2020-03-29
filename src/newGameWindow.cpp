#include "newGameWindow.h"

NewGameWindow::NewGameWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
	:wxDialog(NULL, wxID_ANY, title, pos, size)

{
	 
	wxPanel* panel = new wxPanel(this, wxID_ANY);

	wxStaticText* numberPlayersText = new wxStaticText(this, wxID_ANY, "Anzahl Spieler", wxPoint(20, 20));

	wxArrayString choices;
	choices.Add("2");
	choices.Add("3");

	numberOfPlayers = new wxChoice(this, ID_NumberOfPlayers, wxPoint(100, 20), wxSize(50, 20),choices);
	numberOfPlayers->Select(0);
	setGuiPlayers(2);

	this->Center();
	
}

void NewGameWindow::OnClose(wxCloseEvent& event)
{
	Destroy();
}

void NewGameWindow::SelectedNumberOfPlayersChoice(wxCommandEvent& event)
{

	int selected = 0;

	selected = numberOfPlayers->GetSelection();
	
	newNumberOfPlayers = selected + 2;

	//wxLogDebug(std::to_string(newNumberOfPlayers).c_str());
	setGuiPlayers(newNumberOfPlayers);
}
void NewGameWindow::setGuiPlayers(int playerNumber)
{



	panelPlayers= new wxPanel(this, wxID_ANY);
	panelPlayers->SetSize(this->GetSize());

	InputPanel* ip = new InputPanel(panelPlayers, 1000, wxPoint(200, 200), wxSize(250, 30));
	InputPanel* i2 = new InputPanel(panelPlayers, 1000, wxPoint(200, 250), wxSize(250, 30));
	
	//destroy old fields 
	/*for (int i = 0; i < playerLabels.size(); i++)
	{
		playerLabels.at(i)->Destroy();
		nameInputFields.at(i)->Destroy();
	}*/
	


	//if playernumber is incorrect
	if (!(playerNumber >= 2 && playerNumber < 4))
	{
		return;
	}

	

	int yStart = 50;
	int xStart = 20;

	int yLine;

	int offsetBetweenLines = 20;
	
	//playerLabels.clear();
	//nameInputFields.clear();
	
	
	for (int i = 0; i < playerNumber; i++)
	{

		//TODO 

		//generate temporary textfield
		yLine = yStart + i * 25 + i * offsetBetweenLines;
		
		//calculate yLine of fields
		
		
		wxStaticText* tempStaticText;
		tempStaticText = new wxStaticText(panelPlayers, wxID_ANY, "Player " + std::to_string(i+1), wxPoint(xStart, yLine), wxSize(100, 25));
		playerLabels.push_back(tempStaticText);
	
		wxTextCtrl* tempInputPlayerName;
		tempInputPlayerName = new wxTextCtrl(panelPlayers, wxID_ANY, wxEmptyString, wxPoint(xStart + tempStaticText->GetSize().x + 10, yLine), wxSize(60, 25));
	
		nameInputFields.push_back(tempInputPlayerName);

	
	
	}
}

wxBEGIN_EVENT_TABLE(NewGameWindow, wxDialog)
	EVT_CLOSE(NewGameWindow::OnClose)
	EVT_CHOICE(ID_NumberOfPlayers,NewGameWindow::SelectedNumberOfPlayersChoice)

wxEND_EVENT_TABLE()