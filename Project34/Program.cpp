#pragma once
#include"OnBoarding.h"

#include "Menus.h"
#include"2ndUI.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
    Application::Run(gcnew Project34::Menus()); 
}
