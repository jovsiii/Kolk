#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;


public ref class Order {
    //directory for file handling
    static String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);

private:
    //private members
    DataGridView^ dataGridView1;
    RichTextBox^ richTextBox1;
    RadioButton^ radioButtonSmall;
    RadioButton^ radioButtonLarge;
    TextBox^ Quantity;
    String^ productName;

public:
    //constructor
    Order(DataGridView^ dgv, RichTextBox^ rtb, RadioButton^ rbSmall, RadioButton^ rbLarge,String^prName, TextBox ^quanity) {
        dataGridView1 = dgv;
        richTextBox1 = rtb;
        radioButtonSmall = rbSmall;
        productName = prName;
        radioButtonLarge = rbLarge;
        Quantity = quanity;

    }
    void Reciept() {
        //clears the rich text box
        richTextBox1->Clear();
        //Get time and date for reciept
        DateTime currentDateTime = DateTime::Now;
        String^ formattedDateTime = currentDateTime.ToString("yyyy-MM-dd HH:mm:ss");
        //properties of the rich textbox
        richTextBox1->Font = gcnew System::Drawing::Font("Courier New", 10);

        //header of the reciept
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText("=                            PAHUWAY                              =" + Environment::NewLine);
        richTextBox1->AppendText("=                            RECEIPT                              =" + Environment::NewLine);
        richTextBox1->AppendText("=                                                                 = " + Environment::NewLine);
        richTextBox1->AppendText("=                         DATE: (" + formattedDateTime + ")             =" + Environment::NewLine);
        richTextBox1->AppendText("=                                                                 = " + Environment::NewLine);
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);

        //individual paddings of the columns
        array<int>^ contentPadding = gcnew array<int>{5, 5, 8, 5};
        //individual paddings for the items
        array<int>^ barpadding = gcnew array<int>{10, 10, 5, 5};
        //interates the head of the column for their name
        for (int i = 0; i < dataGridView1->Columns->Count; ++i) {
            //prints the name of the column
            richTextBox1->AppendText(String::Format("{0," + (barpadding[i] + dataGridView1->Columns[i]->HeaderText->Length) + "}   ", dataGridView1->Columns[i]->HeaderText));
        }
        richTextBox1->AppendText(Environment::NewLine);


        // Iterate through each row in the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;
            //prints data from the the datagridveiw
            for each (DataGridViewCell ^ cell in row->Cells) {
                richTextBox1->AppendText(String::Format("{0," + (contentPadding[cell->ColumnIndex] + cell->Value->ToString()->Length) + "}   ", cell->Value->ToString()));
            }

            richTextBox1->AppendText(Environment::NewLine);
        }

        int columnIndex = 3;

        int total = 0;
        // Calculate total from  the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;

            Object^ value = row->Cells[columnIndex]->Value;
            //add the value of all cells in the column total
            if (value != nullptr) {
                total += Convert::ToInt32(value);
            }
        }
        //displays total
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText(String::Format("                                                TOTAL: Php. {0}", total + ".00") + Environment::NewLine);

    }

    void saveToText() {
        //create a unique file name for the receipt 
        String^ fileName = "Receipt_" + DateTime::Now.ToString("yyyyMMdd_HHmmss") + ".txt";
        //directory
        String^ filePath = Path::Combine(currentDirectory, fileName);

        try {
            //saves the content of the richtext box
            richTextBox1->SaveFile(filePath, RichTextBoxStreamType::PlainText);
            MessageBox::Show("Receipt saved successfully!");
        }
        catch (Exception^ ex) {
            //message box for user error
            MessageBox::Show("Error saving receipt: " + ex->Message);
        }
    }


    void BuildOrder(String^ ProductName) {
        int quantity = 0;
        double price = 0.0;

        // Checks if the input of the user is valid 
        if (radioButtonSmall->Checked || radioButtonLarge->Checked) {
            array<Object^>^ rowValues = gcnew array<Object^>(dataGridView1->Columns->Count);
            // Stores the values 
            rowValues[0] = ProductName;  

            if (radioButtonSmall->Checked) {
                price = 100.0;  // Set the price for small
            }
            else if (radioButtonLarge->Checked) {
                price = 120.0;  // Set the price for large
            }

            if (Int32::TryParse(Quantity->Text, quantity) && quantity < 99) {
                rowValues[1] = price;  // Assign the selected price directly
                rowValues[2] = quantity;  // Assign the entered quantity

                // Computes for total
                double total = price * quantity;
                // Stores the total 
                rowValues[3] = total;

                // Adds all the values to the datagrid view
                dataGridView1->Rows->Add(rowValues);

                // Reset components
                radioButtonSmall->Checked = false;
                radioButtonLarge->Checked = false;
                Quantity->Text = "";
                // Add additional components to reset if needed
            }
            else {
                // Message box for quantity error
                MessageBox::Show("Please enter a valid quantity (less than 99).");
            }
        }
        else {
            // Message box for size error
            MessageBox::Show("Please select a size from the radio buttons.");
        }
    }






    void removeRow() {
        if (dataGridView1->SelectedRows->Count > 0) {
            // Get the index of the selected row
            int selectedIndex = dataGridView1->SelectedRows[0]->Index;

            // Remove the selected row from the DataGridView
            dataGridView1->Rows->RemoveAt(selectedIndex);
        }
        else {
            //message box for user error
            MessageBox::Show("Please select a row to remove.");
        }
    }
};
