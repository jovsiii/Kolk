#pragma once
#include"Menus.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace Project34;


ref class Login {
    //directory for file handling
    static String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);
    static String^ fileName = "cred.txt";
    static String^ filePath = Path::Combine(currentDirectory, fileName);

public:
    //function for login with two parameters
    static bool login(TextBox^ txtboxUser, TextBox^ txtBoxPass) {
        //takes the values of the textboxes
        String^ username = txtboxUser->Text;
        String^ password = txtBoxPass->Text;


        try {
            //initializes the file reader
            StreamReader^ file = gcnew StreamReader(filePath);
            //stores the text
            String^ line;
            //default value of the login
            bool loggedIn = false;
            //reads all the line  
            while ((line = file->ReadLine()) != nullptr) {
                //seperates the username and password
                array<String^>^ parts = line->Split(',');
                //checks if the account exists in the file
                if (parts->Length == 3 && parts[0]->Trim() == username && parts[1]->Trim() == password) {

                    loggedIn = true;
                    break;

                }
            }
            //closes the file reader
            file->Close();
            //shows the menu after finding the text file
            if (loggedIn) {
                //initializes the form for the menu
                Menus^ main = gcnew Menus();
                //shows the menu
                main->Show();
                return true;
            }
            else {
                //message box for user error
                MessageBox::Show("Invalid username or password. Please try again.");
                return false;
            }
        }
        catch (IOException^ e) {
            //message box for failed file reading
            MessageBox::Show("Error accessing the file: " + e->Message);
            return false;
        }
    }
    //function for sign up with three parametersw
    static bool reg(TextBox^ tbUsername, TextBox^ tbPassword, TextBox^ tbConfirm) {
        array<TextBox^>^ textBoxes = { tbUsername, tbPassword, tbConfirm };
        //iterates the text box 
        for each (TextBox ^ textBox in textBoxes) {
            //removes the white spaces
            String^ text = textBox->Text->Trim();
            if (String::IsNullOrEmpty(text) || String::IsNullOrWhiteSpace(text)) {
                MessageBox::Show("Please fill in all the fields.");
                return false;
            }
        }
        //checks if the values are the same in the password and confirm passwor
        if (tbPassword->Text->Trim() != tbConfirm->Text->Trim()) {
            MessageBox::Show("Passwords do not match.");
            return false;
        }
        //checks if account exists
        try {
            if (File::Exists(filePath)) {

                //assigns string to store all accounts
                String^ Accounts = File::ReadAllText(filePath);
                //assigns a string for new created account
                String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();

                //checks if an account exists
                if (Accounts->Contains(newAccount)) {
                    //message box if account already exists
                    MessageBox::Show("Account already exists.");
                    return false;
                }
            }
            //initializes file writer

            StreamWriter^ file = gcnew StreamWriter(filePath, true);
            //assigns a string for new created account
            String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();
            //writes the new account to the file
            file->WriteLine(newAccount);

            file->Close();
            //message box for successul creation
            MessageBox::Show("Account created successfully!");
            return true;
        }
        //error message box for failed file handling
        catch (IOException^ ex) {
            MessageBox::Show("Error accessing the file: " + ex->Message);
            return false;
        }
    }
};








