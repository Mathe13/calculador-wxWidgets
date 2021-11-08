/***************************************************************
 * Name:      TesteWxFinalMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-08-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TESTEWXFINALMAIN_H
#define TESTEWXFINALMAIN_H

//(*Headers(TesteWxFinalFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)
#include <iostream>
using namespace std;

class Complexo
{
    private:
        double real;
        double imag;
    public:
        Complexo()
        {
            real = 0.0;
            imag = 0.0;
        }
        Complexo(double real,double imag)
        {
            setReal(real);
            setImag(imag);
        }
        double getReal()
        {
            return real;
        }
        double getImag()
        {
            return imag;
        }
        void setReal(double real)
        {
            this->real = real;
        }
        void setImag(double imag)
        {
            this->imag = imag;
        }
        double getMagnitude()
        {
            return sqrt(real * real + imag * imag);
        }
        double getAngulo()
        {
            return atan2(imag,real);
        }
        void soma(Complexo *complexo2)
        {
            real += complexo2->real;
            imag += complexo2->imag;
        }
        void subtracao(Complexo *complexo2)
        {
            real -= complexo2->real;
            imag -= complexo2->imag;
        }
        void multiplicacao(Complexo * complexo2)
        {
            double modulo1 = getMagnitude();
            double angulo1 = getAngulo();
            double modulo2 = complexo2->getMagnitude();
            double angulo2 = complexo2->getAngulo();
            double moduloResultante = modulo1 * modulo2;
            double anguloResultante = angulo1 + angulo2;
            real = moduloResultante * cos(anguloResultante);
            imag = moduloResultante * sin(anguloResultante);
        }
        void divisao(Complexo * complexo2)
        {
            double modulo1 = getMagnitude();
            double angulo1 = getAngulo();
            double modulo2 = complexo2->getMagnitude();
            double angulo2 = complexo2->getAngulo();
            double moduloResultante = modulo1 / modulo2;
            double anguloResultante = angulo1 - angulo2;
            real = moduloResultante * cos(anguloResultante);
            imag = moduloResultante * sin(anguloResultante);
        }
        string stringRetangular()
        {
            string saida = "(";
            saida += to_string(real);
            saida += ",";
            saida += to_string(imag);
            saida += ")";
            return saida;
        }
        string stringPolar()
        {
            string saida = "(";
            saida += to_string(getMagnitude());
            saida += ",";
            saida += to_string(getAngulo()*180/3.1415926535);
            saida += ")";
            return saida;
        }
        string toString()
        {
            return stringRetangular();
        }
};

class TesteWxFinalFrame: public wxFrame
{
    public:

        TesteWxFinalFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~TesteWxFinalFrame();
        Complexo * complexo;
    private:

        //(*Handlers(TesteWxFinalFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton_subClick(wxCommandEvent& event);
        void OnButton_somaClick(wxCommandEvent& event);
        void OnButton_divClick(wxCommandEvent& event);
        void OnButton_multClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(TesteWxFinalFrame)
        static const long ID_BUTTON_SOMA;
        static const long ID_BUTTON2;
        static const long ID_BUTTON_MULT;
        static const long ID_BUTTON_SUB;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1_REAL;
        static const long ID_TEXTCTRL2_REAL;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2_IMAG;
        static const long ID_PANEL2;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL3_REAL;
        static const long ID_STATICTEXT6;
        static const long ID_TEXTCTRL3_IMAG;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TesteWxFinalFrame)
        wxButton* Button_div;
        wxButton* Button_mult;
        wxButton* Button_soma;
        wxButton* Button_sub;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1Imag;
        wxTextCtrl* TextCtrl1Real;
        wxTextCtrl* TextCtrl2Imag;
        wxTextCtrl* TextCtrl2Real;
        wxTextCtrl* TextCtrl3Imag;
        wxTextCtrl* TextCtrl3Real;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTEWXFINALMAIN_H
