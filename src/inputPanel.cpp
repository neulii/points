#include "inputPanel.h"


InputPanel::InputPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) 
	: wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* panelSizer;
	panelSizer = new wxBoxSizer( wxHORIZONTAL );

	labelPlayer = new wxStaticText( this, wxID_ANY, wxT("player"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	labelPlayer->Wrap( -1 );
	panelSizer->Add( labelPlayer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	inputName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	panelSizer->Add( inputName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( panelSizer );
	this->Layout();
}
