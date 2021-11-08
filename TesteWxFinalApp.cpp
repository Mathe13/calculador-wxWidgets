/***************************************************************
 * Name:      TesteWxFinalApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-08-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "TesteWxFinalApp.h"

//(*AppHeaders
#include "TesteWxFinalMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(TesteWxFinalApp);

bool TesteWxFinalApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	TesteWxFinalFrame* Frame = new TesteWxFinalFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
