#pragma once

using namespace System::Drawing::Drawing2D;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Rounded

{
    // panels curved
public:
    static void RoundCorners(Panel^ panel, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();
      
        //top left
        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        //top right
        path->AddArc(panel->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        //bottom right
        path->AddArc(panel->Width - radius * 2, panel->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        //bottom left
        path->AddArc(0, panel->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        //close the graphpath
        path->CloseAllFigures();
        //apply modification 
        panel->Region = gcnew System::Drawing::Region(path);
    }
public:
    //make buttons curved
    static void CurveButton(Button^ button, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();
        //top left
        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        //top right
        path->AddArc(button->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        //bottom right
        path->AddArc(button->Width - radius * 2, button->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        //bottom left
        path->AddArc(0, button->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        //close the graphpath
        path->CloseAllFigures();
        //apply modification
        button->Region = gcnew System::Drawing::Region(path);
    }
};




