/***************************************************************
 * Name:      TesteWxFinalMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-08-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "TesteWxFinalMain.h"
#include <wx/msgdlg.h>




//(*InternalHeaders(TesteWxFinalFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(TesteWxFinalFrame)
const long TesteWxFinalFrame::ID_BUTTON_SOMA = wxNewId();
const long TesteWxFinalFrame::ID_BUTTON2 = wxNewId();
const long TesteWxFinalFrame::ID_BUTTON_MULT = wxNewId();
const long TesteWxFinalFrame::ID_BUTTON_SUB = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT1 = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT2 = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL1_REAL = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL2_REAL = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT3 = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT4 = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL1 = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL2_IMAG = wxNewId();
const long TesteWxFinalFrame::ID_PANEL2 = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT5 = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL3_REAL = wxNewId();
const long TesteWxFinalFrame::ID_STATICTEXT6 = wxNewId();
const long TesteWxFinalFrame::ID_TEXTCTRL3_IMAG = wxNewId();
const long TesteWxFinalFrame::ID_PANEL1 = wxNewId();
const long TesteWxFinalFrame::idMenuQuit = wxNewId();
const long TesteWxFinalFrame::idMenuAbout = wxNewId();
const long TesteWxFinalFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TesteWxFinalFrame,wxFrame)
    //(*EventTable(TesteWxFinalFrame)
    //*)
END_EVENT_TABLE()

TesteWxFinalFrame::TesteWxFinalFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(TesteWxFinalFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, _("+"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(248,176), wxSize(544,450), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Button_soma = new wxButton(Panel1, ID_BUTTON_SOMA, _("+"), wxPoint(16,24), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_SOMA"));
    Button_div = new wxButton(Panel1, ID_BUTTON2, _("/"), wxPoint(16,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button_mult = new wxButton(Panel1, ID_BUTTON_MULT, _("x"), wxPoint(16,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_MULT"));
    Button_sub = new wxButton(Panel1, ID_BUTTON_SUB, _("-"), wxPoint(16,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_SUB"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("N1:"), wxPoint(128,32), wxSize(26,24), 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("N2:"), wxPoint(128,72), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    TextCtrl1Real = new wxTextCtrl(Panel1, ID_TEXTCTRL1_REAL, wxEmptyString, wxPoint(160,32), wxSize(72,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1_REAL"));
    TextCtrl1Real->SetMaxLength(10);
    TextCtrl2Real = new wxTextCtrl(Panel1, ID_TEXTCTRL2_REAL, wxEmptyString, wxPoint(160,72), wxSize(72,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2_REAL"));
    TextCtrl2Real->SetMaxLength(10);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("+ i"), wxPoint(248,32), wxSize(24,32), 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("+ i"), wxPoint(248,72), wxSize(16,24), 0, _T("ID_STATICTEXT4"));
    TextCtrl1Imag = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(272,32), wxSize(80,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1Imag->SetMaxLength(10);
    TextCtrl2Imag = new wxTextCtrl(Panel1, ID_TEXTCTRL2_IMAG, wxEmptyString, wxPoint(272,72), wxSize(80,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2_IMAG"));
    TextCtrl2Imag->SetMaxLength(10);
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxPoint(128,104), wxSize(224,20), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Res:"), wxPoint(128,136), wxSize(32,24), 0, _T("ID_STATICTEXT5"));
    TextCtrl3Real = new wxTextCtrl(Panel1, ID_TEXTCTRL3_REAL, wxEmptyString, wxPoint(160,136), wxSize(72,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3_REAL"));
    TextCtrl3Real->SetMaxLength(10);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("+ i"), wxPoint(240,136), wxSize(24,32), 0, _T("ID_STATICTEXT6"));
    TextCtrl3Imag = new wxTextCtrl(Panel1, ID_TEXTCTRL3_IMAG, wxEmptyString, wxPoint(264,136), wxSize(88,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3_IMAG"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON_SOMA,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TesteWxFinalFrame::OnButton_somaClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TesteWxFinalFrame::OnButton_divClick);
    Connect(ID_BUTTON_MULT,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TesteWxFinalFrame::OnButton_multClick);
    Connect(ID_BUTTON_SUB,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TesteWxFinalFrame::OnButton_subClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TesteWxFinalFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TesteWxFinalFrame::OnAbout);
    //*)
    complexo = new Complexo(1,2);
}

TesteWxFinalFrame::~TesteWxFinalFrame()
{
    //(*Destroy(TesteWxFinalFrame)
    //*)
}

void TesteWxFinalFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void TesteWxFinalFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void TesteWxFinalFrame::OnButton_somaClick(wxCommandEvent& event)
{
    Complexo c1,c2;
    double real1,real2;
    double imag1,imag2;
    TextCtrl1Real->GetValue().ToDouble(&real1);
    TextCtrl2Real->GetValue().ToDouble(&real2);
    TextCtrl1Imag->GetValue().ToDouble(&imag1);
    TextCtrl2Imag->GetValue().ToDouble(&imag2);

    c1 = Complexo(real1,imag1);
    c2 = Complexo(real2,imag2);

    c1.soma(&c2);


    TextCtrl3Real->SetLabel(wxString::Format(wxT("%f"), c1.getReal()));
    TextCtrl3Imag->SetLabel(wxString::Format(wxT("%f"), c1.getImag()));


}

void TesteWxFinalFrame::OnButton_subClick(wxCommandEvent& event)
{
    Complexo c1,c2;
    double real1,real2;
    double imag1,imag2;
    TextCtrl1Real->GetValue().ToDouble(&real1);
    TextCtrl2Real->GetValue().ToDouble(&real2);
    TextCtrl1Imag->GetValue().ToDouble(&imag1);
    TextCtrl2Imag->GetValue().ToDouble(&imag2);

    c1 = Complexo(real1,imag1);
    c2 = Complexo(real2,imag2);

    c1.subtracao(&c2);

    TextCtrl3Real->SetLabel(wxString::Format(wxT("%f"), c1.getReal()));
    TextCtrl3Imag->SetLabel(wxString::Format(wxT("%f"), c1.getImag()));


}



void TesteWxFinalFrame::OnButton_divClick(wxCommandEvent& event)
{
    Complexo c1,c2;
    double real1,real2;
    double imag1,imag2;
    TextCtrl1Real->GetValue().ToDouble(&real1);
    TextCtrl2Real->GetValue().ToDouble(&real2);
    TextCtrl1Imag->GetValue().ToDouble(&imag1);
    TextCtrl2Imag->GetValue().ToDouble(&imag2);

    c1 = Complexo(real1,imag1);
    c2 = Complexo(real2,imag2);

    c1.divisao(&c2);

    TextCtrl3Real->SetLabel(wxString::Format(wxT("%f"), c1.getReal()));
    TextCtrl3Imag->SetLabel(wxString::Format(wxT("%f"), c1.getImag()));

}

void TesteWxFinalFrame::OnButton_multClick(wxCommandEvent& event)
{
    Complexo c1,c2;
    double real1,real2;
    double imag1,imag2;
    TextCtrl1Real->GetValue().ToDouble(&real1);
    TextCtrl2Real->GetValue().ToDouble(&real2);
    TextCtrl1Imag->GetValue().ToDouble(&imag1);
    TextCtrl2Imag->GetValue().ToDouble(&imag2);

    c1 = Complexo(real1,imag1);
    c2 = Complexo(real2,imag2);

    c1.multiplicacao(&c2);

    TextCtrl3Real->SetLabel(wxString::Format(wxT("%f"), c1.getReal()));
    TextCtrl3Imag->SetLabel(wxString::Format(wxT("%f"), c1.getImag()));

}
