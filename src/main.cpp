#include "main.h"
#include "mainWindow.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("Points",wxDefaultPosition, wxSize(450, 340));
    frame->Show(true);
    return true;
}