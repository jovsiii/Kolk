#pragma once
#include"Custom.h"
#include"recieptManager.h"
#include "2ndUI.h"
#include"newpanels.h"


namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Project34;
	

	/// <summary>
	/// Summary for Menus
	/// </summary>
	public ref class Menus : public System::Windows::Forms::Form

	{
	private:
		Order^ order;
		String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);
		 String^ fileName = "cred.txt";
		 String^ filePath = Path::Combine(currentDirectory, fileName);
		 String^ Product;
		 int count;


private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::Panel^ panelCart;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::PictureBox^ pictureBox100;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::PictureBox^ pictureBox101;
private: System::Windows::Forms::PictureBox^ pictureBox97;
private: System::Windows::Forms::PictureBox^ pictureBox98;
private: System::Windows::Forms::Label^ CartTotal;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ TotalVoucher;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ PBcaffeLatte;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ PBmochaFrappuccino;
private: System::Windows::Forms::Panel^ pnlBS3;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::PictureBox^ PBcappuccino;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ pnlBS1;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ pnlBS2;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ lblUsername;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::Panel^ SLIDER;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Panel^ HOME;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::Panel^ HOTDRINNKS;
private: System::Windows::Forms::PictureBox^ pictureBox53;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ pictureBox52;
private: System::Windows::Forms::PictureBox^ pictureBox54;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::PictureBox^ pictureBox51;
private: System::Windows::Forms::PictureBox^ pictureBox50;
private: System::Windows::Forms::PictureBox^ pictureBox49;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::PictureBox^ pictureBox45;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::Panel^ COLDDRINKS;
private: System::Windows::Forms::PictureBox^ pictureBox69;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox68;
private: System::Windows::Forms::PictureBox^ pictureBox67;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::PictureBox^ pictureBox71;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::PictureBox^ pictureBox70;
private: System::Windows::Forms::PictureBox^ pictureBox66;
private: System::Windows::Forms::PictureBox^ pictureBox65;
private: System::Windows::Forms::PictureBox^ pictureBox64;
private: System::Windows::Forms::PictureBox^ pictureBox63;
private: System::Windows::Forms::PictureBox^ pictureBox62;
private: System::Windows::Forms::PictureBox^ pictureBox61;
private: System::Windows::Forms::PictureBox^ pictureBox60;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::PictureBox^ pictureBox55;
private: System::Windows::Forms::PictureBox^ pictureBox56;
private: System::Windows::Forms::PictureBox^ pictureBox57;
private: System::Windows::Forms::PictureBox^ pictureBox59;
private: System::Windows::Forms::PictureBox^ pictureBox58;
private: System::Windows::Forms::Panel^ panelmf;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Button^ mfbtn;
private: System::Windows::Forms::Panel^ PanelCap;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Button^ cafelattebtn;
private: System::Windows::Forms::Panel^ Panelcafelatte;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ cap1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::PictureBox^ cap2;
private: System::Windows::Forms::PictureBox^ des1;
private: System::Windows::Forms::Button^ capbtn;
private: System::Windows::Forms::Panel^ panelOrder;
private: System::Windows::Forms::RadioButton^ large;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::RadioButton^ regular;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ tbQuantity;
private: System::Windows::Forms::Panel^ REGISTER;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ lblEmail;
private: System::Windows::Forms::Label^ lblName;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ btnRegister;

private: System::Windows::Forms::TextBox^ tbConfirm;
private: System::Windows::Forms::TextBox^ tbUsername;
private: System::Windows::Forms::TextBox^ tbPassword;
private: System::Windows::Forms::Panel^ LOGINPANEL;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ lblUser;
private: System::Windows::Forms::TextBox^ txtboxUser;
private: System::Windows::Forms::Label^ Signup;
private: System::Windows::Forms::Label^ lblPass;
private: System::Windows::Forms::Button^ btnSignin;
private: System::Windows::Forms::TextBox^ txtBoxPass;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ loginback;
private: System::Windows::Forms::Panel^ CMPanel;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ CPPanel;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Button^ button3;


private: System::Windows::Forms::Panel^ COFFEEFRAPPES;


























   
	public:
		Menus(void)
		{
			InitializeComponent();
		
			order = gcnew Order(dataGridView1, richTextBox1, regular, large, Product, tbQuantity);
		
			



		
			//
			//TODO: Add the constructor code here
			//
			
			Order^ orderInstance = gcnew Order(dataGridView1, richTextBox1, regular, large, Product, tbQuantity);
			dataGridView1->Columns->Add("Column1", "Drink Name");
			dataGridView1->Columns->Add("Column2", "Size");
			dataGridView1->Columns->Add("Column3", "Quantity");
			dataGridView1->Columns->Add("Total", "Total");
			// Set the background color and text color for selected cells
			dataGridView1->DefaultCellStyle->SelectionBackColor = Color::FromArgb(60, 42, 33);
			

			// Set DataGridView dimensions
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			printDocument1 = gcnew System::Drawing::Printing::PrintDocument();
			printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Menus::printDocument1_);
			printPreviewDialog1->Document = printDocument1;
		


			//Rounded components
		

		

		
			Rounded::CurveButton(btnPrint, 20);
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Menus()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::Button^ btnPrint;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::DataGridView^ dataGridView1;

























private: System::ComponentModel::IContainer^ components;
























	protected:

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menus::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelCart = (gcnew System::Windows::Forms::Panel());
			this->TotalVoucher = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CartTotal = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PBcaffeLatte = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->PBmochaFrappuccino = (gcnew System::Windows::Forms::PictureBox());
			this->pnlBS3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->PBcappuccino = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pnlBS1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlBS2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->SLIDER = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->HOME = (gcnew System::Windows::Forms::Panel());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->HOTDRINNKS = (gcnew System::Windows::Forms::Panel());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->COLDDRINKS = (gcnew System::Windows::Forms::Panel());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->COFFEEFRAPPES = (gcnew System::Windows::Forms::Panel());
			this->panelmf = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->mfbtn = (gcnew System::Windows::Forms::Button());
			this->PanelCap = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->cafelattebtn = (gcnew System::Windows::Forms::Button());
			this->Panelcafelatte = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->cap1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cap2 = (gcnew System::Windows::Forms::PictureBox());
			this->des1 = (gcnew System::Windows::Forms::PictureBox());
			this->capbtn = (gcnew System::Windows::Forms::Button());
			this->panelOrder = (gcnew System::Windows::Forms::Panel());
			this->large = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->regular = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->REGISTER = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->loginback = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->tbConfirm = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->LOGINPANEL = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->txtboxUser = (gcnew System::Windows::Forms::TextBox());
			this->Signup = (gcnew System::Windows::Forms::Label());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->btnSignin = (gcnew System::Windows::Forms::Button());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CMPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CPPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelCart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcaffeLatte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBmochaFrappuccino))->BeginInit();
			this->pnlBS3->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcappuccino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->SLIDER->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->HOME->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->HOTDRINNKS->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			this->COLDDRINKS->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			this->COFFEEFRAPPES->SuspendLayout();
			this->panelmf->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->PanelCap->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->Panelcafelatte->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cap2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->des1))->BeginInit();
			this->panelOrder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->REGISTER->SuspendLayout();
			this->LOGINPANEL->SuspendLayout();
			this->CMPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->CPPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->SuspendLayout();
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Menus::printDocument1_);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->Location = System::Drawing::Point(21, 213);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->Size = System::Drawing::Size(374, 364);
			this->dataGridView1->TabIndex = 9;
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnPrint->FlatAppearance->BorderSize = 0;
			this->btnPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(605, 857);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(95, 44);
			this->btnPrint->TabIndex = 1;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &Menus::btnPrint_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(110, 844);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(547, 474);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Menus::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Menus::timer2_Tick);
			// 
			// panelCart
			// 
			this->panelCart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panelCart->Controls->Add(this->TotalVoucher);
			this->panelCart->Controls->Add(this->label39);
			this->panelCart->Controls->Add(this->label38);
			this->panelCart->Controls->Add(this->label36);
			this->panelCart->Controls->Add(this->button1);
			this->panelCart->Controls->Add(this->CartTotal);
			this->panelCart->Controls->Add(this->label35);
			this->panelCart->Controls->Add(this->label32);
			this->panelCart->Controls->Add(this->pictureBox97);
			this->panelCart->Controls->Add(this->pictureBox98);
			this->panelCart->Controls->Add(this->pictureBox100);
			this->panelCart->Controls->Add(this->label37);
			this->panelCart->Controls->Add(this->dataGridView1);
			this->panelCart->Controls->Add(this->pictureBox101);
			this->panelCart->Location = System::Drawing::Point(1718, 41);
			this->panelCart->Name = L"panelCart";
			this->panelCart->Size = System::Drawing::Size(414, 820);
			this->panelCart->TabIndex = 44;
			// 
			// TotalVoucher
			// 
			this->TotalVoucher->AutoSize = true;
			this->TotalVoucher->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalVoucher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->TotalVoucher->Location = System::Drawing::Point(338, 675);
			this->TotalVoucher->Name = L"TotalVoucher";
			this->TotalVoucher->Size = System::Drawing::Size(37, 19);
			this->TotalVoucher->TabIndex = 55;
			this->TotalVoucher->Text = L"Cart";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label39->Location = System::Drawing::Point(338, 648);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(37, 19);
			this->label39->TabIndex = 54;
			this->label39->Text = L"Cart";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(44, 667);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(47, 19);
			this->label38->TabIndex = 53;
			this->label38->Text = L"Total:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(40, 639);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(133, 19);
			this->label36->TabIndex = 52;
			this->label36->Text = L"Voucher Discount:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button1->Location = System::Drawing::Point(124, 719);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 40);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Checkout";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// CartTotal
			// 
			this->CartTotal->AutoSize = true;
			this->CartTotal->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CartTotal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->CartTotal->Location = System::Drawing::Point(334, 617);
			this->CartTotal->Name = L"CartTotal";
			this->CartTotal->Size = System::Drawing::Size(37, 19);
			this->CartTotal->TabIndex = 50;
			this->CartTotal->Text = L"Cart";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(40, 609);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(79, 19);
			this->label35->TabIndex = 47;
			this->label35->Text = L"Cart Total:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(40, 178);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(86, 23);
			this->label32->TabIndex = 41;
			this->label32->Text = L"Order list";
			// 
			// pictureBox97
			// 
			this->pictureBox97->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox97->Location = System::Drawing::Point(230, 121);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(126, 49);
			this->pictureBox97->TabIndex = 39;
			this->pictureBox97->TabStop = false;
			// 
			// pictureBox98
			// 
			this->pictureBox98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox98->Location = System::Drawing::Point(95, 121);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(122, 44);
			this->pictureBox98->TabIndex = 38;
			this->pictureBox98->TabStop = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->Location = System::Drawing::Point(365, 41);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(30, 25);
			this->pictureBox100->TabIndex = 35;
			this->pictureBox100->TabStop = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label37->Location = System::Drawing::Point(51, 37);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(55, 29);
			this->label37->TabIndex = 33;
			this->label37->Text = L"Cart";
			// 
			// pictureBox101
			// 
			this->pictureBox101->Location = System::Drawing::Point(21, 41);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(24, 23);
			this->pictureBox101->TabIndex = 32;
			this->pictureBox101->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(9, 382);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(18, 403);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(25, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 21);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Best sellers";
			// 
			// PBcaffeLatte
			// 
			this->PBcaffeLatte->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBcaffeLatte.Image")));
			this->PBcaffeLatte->Location = System::Drawing::Point(284, 183);
			this->PBcaffeLatte->Name = L"PBcaffeLatte";
			this->PBcaffeLatte->Size = System::Drawing::Size(115, 182);
			this->PBcaffeLatte->TabIndex = 30;
			this->PBcaffeLatte->TabStop = false;
			this->PBcaffeLatte->Click += gcnew System::EventHandler(this, &Menus::PBcaffeLatte_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(121, 372);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(19, 28);
			this->pictureBox13->TabIndex = 32;
			this->pictureBox13->TabStop = false;
			// 
			// PBmochaFrappuccino
			// 
			this->PBmochaFrappuccino->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBmochaFrappuccino.Image")));
			this->PBmochaFrappuccino->Location = System::Drawing::Point(156, 183);
			this->PBmochaFrappuccino->Name = L"PBmochaFrappuccino";
			this->PBmochaFrappuccino->Size = System::Drawing::Size(115, 182);
			this->PBmochaFrappuccino->TabIndex = 29;
			this->PBmochaFrappuccino->TabStop = false;
			this->PBmochaFrappuccino->Click += gcnew System::EventHandler(this, &Menus::PBmochaFrappuccino_Click);
			// 
			// pnlBS3
			// 
			this->pnlBS3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS3.BackgroundImage")));
			this->pnlBS3->Controls->Add(this->panel9);
			this->pnlBS3->Location = System::Drawing::Point(25, 623);
			this->pnlBS3->Name = L"pnlBS3";
			this->pnlBS3->Size = System::Drawing::Size(374, 100);
			this->pnlBS3->TabIndex = 33;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->flowLayoutPanel1);
			this->panel9->Location = System::Drawing::Point(17, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(47, 97);
			this->panel9->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(42, 121);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(263, 21);
			this->flowLayoutPanel1->TabIndex = 20;
			// 
			// PBcappuccino
			// 
			this->PBcappuccino->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBcappuccino.Image")));
			this->PBcappuccino->Location = System::Drawing::Point(25, 183);
			this->PBcappuccino->Name = L"PBcappuccino";
			this->PBcappuccino->Size = System::Drawing::Size(115, 182);
			this->PBcappuccino->TabIndex = 28;
			this->PBcappuccino->TabStop = false;
			this->PBcappuccino->Click += gcnew System::EventHandler(this, &Menus::PBcappuccino_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 17, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(55, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 28);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Hi! ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(21, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 21);
			this->label8->TabIndex = 27;
			this->label8->Text = L"New Releases";
			// 
			// pnlBS1
			// 
			this->pnlBS1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS1.BackgroundImage")));
			this->pnlBS1->Location = System::Drawing::Point(25, 410);
			this->pnlBS1->Name = L"pnlBS1";
			this->pnlBS1->Size = System::Drawing::Size(374, 100);
			this->pnlBS1->TabIndex = 34;
			this->pnlBS1->Click += gcnew System::EventHandler(this, &Menus::pnlBS1_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(25, 105);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(374, 33);
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			// 
			// pnlBS2
			// 
			this->pnlBS2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS2.BackgroundImage")));
			this->pnlBS2->Location = System::Drawing::Point(25, 516);
			this->pnlBS2->Name = L"pnlBS2";
			this->pnlBS2->Size = System::Drawing::Size(374, 100);
			this->pnlBS2->TabIndex = 35;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(369, 42);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 25);
			this->pictureBox15->TabIndex = 25;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Menus::pictureBox15_Click);
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->pictureBox10);
			this->panel8->Controls->Add(this->pictureBox9);
			this->panel8->Controls->Add(this->pictureBox8);
			this->panel8->Controls->Add(this->pictureBox11);
			this->panel8->Controls->Add(this->pictureBox12);
			this->panel8->Location = System::Drawing::Point(69, 729);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(287, 58);
			this->panel8->TabIndex = 20;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(84, 22);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 19);
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Menus::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(226, 20);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(20, 21);
			this->pictureBox9->TabIndex = 7;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(171, 23);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(32, 18);
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(126, 18);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(26, 26);
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Menus::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(30, 9);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(46, 35);
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Menus::pictureBox12_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(21, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 19);
			this->label9->TabIndex = 23;
			this->label9->Text = L"What are you waiting for\?";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Calibri", 17, System::Drawing::FontStyle::Bold));
			this->lblUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->lblUsername->Location = System::Drawing::Point(88, 42);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(116, 28);
			this->lblUsername->TabIndex = 22;
			this->lblUsername->Text = L"Username,";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(25, 44);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(24, 23);
			this->pictureBox16->TabIndex = 24;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Menus::pictureBox16_Click);
			// 
			// SLIDER
			// 
			this->SLIDER->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->SLIDER->Controls->Add(this->pictureBox4);
			this->SLIDER->Location = System::Drawing::Point(0, 2);
			this->SLIDER->Name = L"SLIDER";
			this->SLIDER->Size = System::Drawing::Size(19, 814);
			this->SLIDER->TabIndex = 38;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(25, 42);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(24, 23);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Menus::pictureBox4_Click_1);
			// 
			// HOME
			// 
			this->HOME->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->HOME->Controls->Add(this->SLIDER);
			this->HOME->Controls->Add(this->pictureBox16);
			this->HOME->Controls->Add(this->lblUsername);
			this->HOME->Controls->Add(this->label9);
			this->HOME->Controls->Add(this->panel8);
			this->HOME->Controls->Add(this->pictureBox15);
			this->HOME->Controls->Add(this->pnlBS2);
			this->HOME->Controls->Add(this->pictureBox14);
			this->HOME->Controls->Add(this->pnlBS1);
			this->HOME->Controls->Add(this->label8);
			this->HOME->Controls->Add(this->label3);
			this->HOME->Controls->Add(this->PBcappuccino);
			this->HOME->Controls->Add(this->pnlBS3);
			this->HOME->Controls->Add(this->PBmochaFrappuccino);
			this->HOME->Controls->Add(this->pictureBox13);
			this->HOME->Controls->Add(this->PBcaffeLatte);
			this->HOME->Controls->Add(this->label7);
			this->HOME->Location = System::Drawing::Point(312, 31);
			this->HOME->Name = L"HOME";
			this->HOME->Size = System::Drawing::Size(414, 820);
			this->HOME->TabIndex = 36;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(22, 41);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(24, 23);
			this->pictureBox41->TabIndex = 39;
			this->pictureBox41->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(18, 78);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 23);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Categories";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label20->Location = System::Drawing::Point(52, 37);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 29);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Menu";
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(366, 41);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 25);
			this->pictureBox40->TabIndex = 42;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &Menus::pictureBox40_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(22, 116);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(113, 29);
			this->pictureBox39->TabIndex = 43;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(153, 116);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(113, 29);
			this->pictureBox38->TabIndex = 44;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &Menus::pictureBox38_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(283, 116);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(113, 29);
			this->pictureBox31->TabIndex = 45;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &Menus::pictureBox31_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(22, 161);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(176, 269);
			this->pictureBox30->TabIndex = 46;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(220, 161);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(176, 269);
			this->pictureBox29->TabIndex = 47;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(22, 448);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(176, 269);
			this->pictureBox28->TabIndex = 48;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(220, 448);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(176, 269);
			this->pictureBox27->TabIndex = 49;
			this->pictureBox27->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->pictureBox21);
			this->panel4->Controls->Add(this->pictureBox22);
			this->panel4->Controls->Add(this->pictureBox23);
			this->panel4->Controls->Add(this->pictureBox24);
			this->panel4->Controls->Add(this->pictureBox25);
			this->panel4->Location = System::Drawing::Point(66, 726);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(287, 58);
			this->panel4->TabIndex = 50;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(41, 21);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(28, 23);
			this->pictureBox21->TabIndex = 27;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Menus::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(226, 20);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(20, 21);
			this->pictureBox22->TabIndex = 7;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(171, 23);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(32, 18);
			this->pictureBox23->TabIndex = 6;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(126, 18);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(26, 26);
			this->pictureBox24->TabIndex = 5;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(84, 22);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(25, 19);
			this->pictureBox25->TabIndex = 4;
			this->pictureBox25->TabStop = false;
			// 
			// HOTDRINNKS
			// 
			this->HOTDRINNKS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->HOTDRINNKS->Controls->Add(this->panel4);
			this->HOTDRINNKS->Controls->Add(this->pictureBox27);
			this->HOTDRINNKS->Controls->Add(this->pictureBox28);
			this->HOTDRINNKS->Controls->Add(this->pictureBox29);
			this->HOTDRINNKS->Controls->Add(this->pictureBox30);
			this->HOTDRINNKS->Controls->Add(this->pictureBox31);
			this->HOTDRINNKS->Controls->Add(this->pictureBox38);
			this->HOTDRINNKS->Controls->Add(this->pictureBox39);
			this->HOTDRINNKS->Controls->Add(this->pictureBox40);
			this->HOTDRINNKS->Controls->Add(this->label20);
			this->HOTDRINNKS->Controls->Add(this->label22);
			this->HOTDRINNKS->Controls->Add(this->pictureBox41);
			this->HOTDRINNKS->Location = System::Drawing::Point(353, 14);
			this->HOTDRINNKS->Name = L"HOTDRINNKS";
			this->HOTDRINNKS->Size = System::Drawing::Size(414, 820);
			this->HOTDRINNKS->TabIndex = 40;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(22, 41);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(24, 23);
			this->pictureBox53->TabIndex = 39;
			this->pictureBox53->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(18, 78);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 23);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Categories";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(52, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 29);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Menu";
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(366, 41);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(30, 25);
			this->pictureBox52->TabIndex = 42;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &Menus::pictureBox52_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(22, 41);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(24, 23);
			this->pictureBox54->TabIndex = 43;
			this->pictureBox54->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label26->Location = System::Drawing::Point(52, 37);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(72, 29);
			this->label26->TabIndex = 44;
			this->label26->Text = L"Menu";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(18, 78);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 23);
			this->label21->TabIndex = 45;
			this->label21->Text = L"Categories";
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(153, 116);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(116, 29);
			this->pictureBox51->TabIndex = 46;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &Menus::pictureBox51_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(22, 116);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(116, 29);
			this->pictureBox50->TabIndex = 47;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &Menus::pictureBox50_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(283, 116);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(113, 29);
			this->pictureBox49->TabIndex = 48;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &Menus::pictureBox49_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(22, 161);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(176, 269);
			this->pictureBox48->TabIndex = 49;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(220, 161);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(176, 269);
			this->pictureBox47->TabIndex = 50;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(22, 448);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(176, 269);
			this->pictureBox46->TabIndex = 51;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(220, 448);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(176, 269);
			this->pictureBox45->TabIndex = 52;
			this->pictureBox45->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->pictureBox20);
			this->panel6->Controls->Add(this->pictureBox26);
			this->panel6->Controls->Add(this->pictureBox42);
			this->panel6->Controls->Add(this->pictureBox43);
			this->panel6->Controls->Add(this->pictureBox44);
			this->panel6->Location = System::Drawing::Point(66, 726);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(287, 58);
			this->panel6->TabIndex = 53;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(41, 21);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(28, 23);
			this->pictureBox20->TabIndex = 27;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Menus::pictureBox20_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(226, 20);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(20, 21);
			this->pictureBox26->TabIndex = 7;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(171, 23);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(32, 18);
			this->pictureBox42->TabIndex = 6;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(126, 18);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(26, 26);
			this->pictureBox43->TabIndex = 5;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(84, 22);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(25, 19);
			this->pictureBox44->TabIndex = 4;
			this->pictureBox44->TabStop = false;
			// 
			// COLDDRINKS
			// 
			this->COLDDRINKS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->COLDDRINKS->Controls->Add(this->panel6);
			this->COLDDRINKS->Controls->Add(this->pictureBox45);
			this->COLDDRINKS->Controls->Add(this->pictureBox46);
			this->COLDDRINKS->Controls->Add(this->pictureBox47);
			this->COLDDRINKS->Controls->Add(this->pictureBox48);
			this->COLDDRINKS->Controls->Add(this->pictureBox49);
			this->COLDDRINKS->Controls->Add(this->pictureBox50);
			this->COLDDRINKS->Controls->Add(this->pictureBox51);
			this->COLDDRINKS->Controls->Add(this->label21);
			this->COLDDRINKS->Controls->Add(this->label26);
			this->COLDDRINKS->Controls->Add(this->pictureBox54);
			this->COLDDRINKS->Controls->Add(this->pictureBox52);
			this->COLDDRINKS->Controls->Add(this->label1);
			this->COLDDRINKS->Controls->Add(this->label19);
			this->COLDDRINKS->Controls->Add(this->pictureBox53);
			this->COLDDRINKS->Location = System::Drawing::Point(353, 13);
			this->COLDDRINKS->Name = L"COLDDRINKS";
			this->COLDDRINKS->Size = System::Drawing::Size(414, 820);
			this->COLDDRINKS->TabIndex = 41;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(22, 41);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(24, 23);
			this->pictureBox69->TabIndex = 39;
			this->pictureBox69->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label29->Location = System::Drawing::Point(52, 37);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(72, 29);
			this->label29->TabIndex = 41;
			this->label29->Text = L"Menu";
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(366, 41);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(30, 25);
			this->pictureBox68->TabIndex = 42;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(22, 41);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(24, 23);
			this->pictureBox67->TabIndex = 43;
			this->pictureBox67->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label28->Location = System::Drawing::Point(52, 37);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(72, 29);
			this->label28->TabIndex = 44;
			this->label28->Text = L"Menu";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label30->Location = System::Drawing::Point(52, 37);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 29);
			this->label30->TabIndex = 45;
			this->label30->Text = L"Menu";
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(22, 41);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(24, 23);
			this->pictureBox71->TabIndex = 46;
			this->pictureBox71->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(18, 78);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(95, 23);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Categories";
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(366, 41);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(30, 25);
			this->pictureBox70->TabIndex = 48;
			this->pictureBox70->TabStop = false;
			this->pictureBox70->Click += gcnew System::EventHandler(this, &Menus::pictureBox70_Click);
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(22, 116);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(116, 29);
			this->pictureBox66->TabIndex = 49;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Click += gcnew System::EventHandler(this, &Menus::pictureBox66_Click);
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(153, 116);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(113, 29);
			this->pictureBox65->TabIndex = 50;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &Menus::pictureBox65_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(283, 116);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(128, 29);
			this->pictureBox64->TabIndex = 51;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &Menus::pictureBox64_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(22, 162);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(176, 269);
			this->pictureBox63->TabIndex = 52;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(220, 162);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(176, 269);
			this->pictureBox62->TabIndex = 53;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(22, 451);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(176, 269);
			this->pictureBox61->TabIndex = 54;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(220, 451);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(176, 269);
			this->pictureBox60->TabIndex = 55;
			this->pictureBox60->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->Controls->Add(this->pictureBox55);
			this->panel10->Controls->Add(this->pictureBox56);
			this->panel10->Controls->Add(this->pictureBox57);
			this->panel10->Controls->Add(this->pictureBox59);
			this->panel10->Controls->Add(this->pictureBox58);
			this->panel10->Location = System::Drawing::Point(66, 726);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(287, 58);
			this->panel10->TabIndex = 56;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(41, 21);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(28, 23);
			this->pictureBox55->TabIndex = 27;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &Menus::pictureBox55_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(226, 20);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(20, 21);
			this->pictureBox56->TabIndex = 7;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(171, 23);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(32, 18);
			this->pictureBox57->TabIndex = 6;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(126, 18);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(26, 26);
			this->pictureBox59->TabIndex = 5;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(84, 22);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(25, 19);
			this->pictureBox58->TabIndex = 4;
			this->pictureBox58->TabStop = false;
			// 
			// COFFEEFRAPPES
			// 
			this->COFFEEFRAPPES->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->COFFEEFRAPPES->Controls->Add(this->panel10);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox60);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox61);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox62);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox63);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox64);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox65);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox66);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox70);
			this->COFFEEFRAPPES->Controls->Add(this->label27);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox71);
			this->COFFEEFRAPPES->Controls->Add(this->label30);
			this->COFFEEFRAPPES->Controls->Add(this->label28);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox67);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox68);
			this->COFFEEFRAPPES->Controls->Add(this->label29);
			this->COFFEEFRAPPES->Controls->Add(this->pictureBox69);
			this->COFFEEFRAPPES->Location = System::Drawing::Point(354, 12);
			this->COFFEEFRAPPES->Name = L"COFFEEFRAPPES";
			this->COFFEEFRAPPES->Size = System::Drawing::Size(414, 820);
			this->COFFEEFRAPPES->TabIndex = 42;
			// 
			// panelmf
			// 
			this->panelmf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panelmf->Controls->Add(this->pictureBox1);
			this->panelmf->Controls->Add(this->panel1);
			this->panelmf->Controls->Add(this->mfbtn);
			this->panelmf->Location = System::Drawing::Point(1210, 35);
			this->panelmf->Name = L"panelmf";
			this->panelmf->Size = System::Drawing::Size(436, 521);
			this->panelmf->TabIndex = 55;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 191);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(357, 245);
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Location = System::Drawing::Point(13, -74);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(401, 268);
			this->panel1->TabIndex = 45;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Location = System::Drawing::Point(27, 109);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(351, 156);
			this->panel5->TabIndex = 2;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(10, 79);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(28, 27);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Menus::pictureBox6_Click_2);
			// 
			// mfbtn
			// 
			this->mfbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->mfbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mfbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->mfbtn->Location = System::Drawing::Point(94, 478);
			this->mfbtn->Name = L"mfbtn";
			this->mfbtn->Size = System::Drawing::Size(240, 40);
			this->mfbtn->TabIndex = 48;
			this->mfbtn->Text = L"Add to cart";
			this->mfbtn->UseVisualStyleBackColor = false;
			this->mfbtn->Click += gcnew System::EventHandler(this, &Menus::mfbtn_Click_1);
			// 
			// PanelCap
			// 
			this->PanelCap->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->PanelCap->Controls->Add(this->pictureBox17);
			this->PanelCap->Controls->Add(this->panel12);
			this->PanelCap->Controls->Add(this->cafelattebtn);
			this->PanelCap->Location = System::Drawing::Point(1210, 35);
			this->PanelCap->Name = L"PanelCap";
			this->PanelCap->Size = System::Drawing::Size(436, 521);
			this->PanelCap->TabIndex = 56;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(37, 189);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(351, 220);
			this->pictureBox17->TabIndex = 50;
			this->pictureBox17->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel12->Controls->Add(this->pictureBox18);
			this->panel12->Controls->Add(this->panel7);
			this->panel12->Location = System::Drawing::Point(13, -74);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(401, 268);
			this->panel12->TabIndex = 45;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(10, 79);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(28, 27);
			this->pictureBox18->TabIndex = 10;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Menus::pictureBox18_Click_1);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Location = System::Drawing::Point(24, 94);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(351, 169);
			this->panel7->TabIndex = 49;
			// 
			// cafelattebtn
			// 
			this->cafelattebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->cafelattebtn->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cafelattebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->cafelattebtn->Location = System::Drawing::Point(94, 478);
			this->cafelattebtn->Name = L"cafelattebtn";
			this->cafelattebtn->Size = System::Drawing::Size(240, 40);
			this->cafelattebtn->TabIndex = 48;
			this->cafelattebtn->Text = L"Add to cart";
			this->cafelattebtn->UseVisualStyleBackColor = false;
			this->cafelattebtn->Click += gcnew System::EventHandler(this, &Menus::cafelattebtn_Click);
			// 
			// Panelcafelatte
			// 
			this->Panelcafelatte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Panelcafelatte->Controls->Add(this->panel3);
			this->Panelcafelatte->Controls->Add(this->label5);
			this->Panelcafelatte->Controls->Add(this->cap2);
			this->Panelcafelatte->Controls->Add(this->des1);
			this->Panelcafelatte->Controls->Add(this->capbtn);
			this->Panelcafelatte->Location = System::Drawing::Point(1209, 35);
			this->Panelcafelatte->Name = L"Panelcafelatte";
			this->Panelcafelatte->Size = System::Drawing::Size(437, 521);
			this->Panelcafelatte->TabIndex = 54;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->cap1);
			this->panel3->Location = System::Drawing::Point(12, -75);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(401, 270);
			this->panel3->TabIndex = 9;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 79);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(28, 27);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Menus::pictureBox7_Click_2);
			// 
			// cap1
			// 
			this->cap1->BackColor = System::Drawing::Color::Transparent;
			this->cap1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cap1.BackgroundImage")));
			this->cap1->Location = System::Drawing::Point(88, 107);
			this->cap1->Name = L"cap1";
			this->cap1->Size = System::Drawing::Size(225, 212);
			this->cap1->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(169, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 29);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Cafe latte";
			// 
			// cap2
			// 
			this->cap2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cap2.Image")));
			this->cap2->Location = System::Drawing::Point(123, 191);
			this->cap2->Name = L"cap2";
			this->cap2->Size = System::Drawing::Size(200, 105);
			this->cap2->TabIndex = 10;
			this->cap2->TabStop = false;
			// 
			// des1
			// 
			this->des1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"des1.Image")));
			this->des1->Location = System::Drawing::Point(50, 338);
			this->des1->Name = L"des1";
			this->des1->Size = System::Drawing::Size(328, 51);
			this->des1->TabIndex = 11;
			this->des1->TabStop = false;
			// 
			// capbtn
			// 
			this->capbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->capbtn->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->capbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->capbtn->Location = System::Drawing::Point(100, 481);
			this->capbtn->Name = L"capbtn";
			this->capbtn->Size = System::Drawing::Size(240, 40);
			this->capbtn->TabIndex = 14;
			this->capbtn->Text = L"Add to cart";
			this->capbtn->UseVisualStyleBackColor = false;
			this->capbtn->Click += gcnew System::EventHandler(this, &Menus::capbtn_Click_1);
			// 
			// panelOrder
			// 
			this->panelOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panelOrder->Controls->Add(this->large);
			this->panelOrder->Controls->Add(this->pictureBox3);
			this->panelOrder->Controls->Add(this->regular);
			this->panelOrder->Controls->Add(this->label12);
			this->panelOrder->Controls->Add(this->tbQuantity);
			this->panelOrder->Location = System::Drawing::Point(1180, 35);
			this->panelOrder->Name = L"panelOrder";
			this->panelOrder->Size = System::Drawing::Size(483, 763);
			this->panelOrder->TabIndex = 53;
			// 
			// large
			// 
			this->large->Location = System::Drawing::Point(267, 660);
			this->large->Name = L"large";
			this->large->Size = System::Drawing::Size(14, 21);
			this->large->TabIndex = 17;
			this->large->TabStop = true;
			this->large->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(191, 527);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(145, 158);
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// regular
			// 
			this->regular->BackColor = System::Drawing::Color::Transparent;
			this->regular->Location = System::Drawing::Point(173, 658);
			this->regular->Name = L"regular";
			this->regular->Size = System::Drawing::Size(22, 23);
			this->regular->TabIndex = 16;
			this->regular->TabStop = true;
			this->regular->UseVisualStyleBackColor = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(234, 698);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 19);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Quantity:";
			// 
			// tbQuantity
			// 
			this->tbQuantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->tbQuantity->Location = System::Drawing::Point(242, 724);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(49, 22);
			this->tbQuantity->TabIndex = 8;
			// 
			// REGISTER
			// 
			this->REGISTER->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->REGISTER->Controls->Add(this->label16);
			this->REGISTER->Controls->Add(this->loginback);
			this->REGISTER->Controls->Add(this->label11);
			this->REGISTER->Controls->Add(this->lblEmail);
			this->REGISTER->Controls->Add(this->lblName);
			this->REGISTER->Controls->Add(this->textBox2);
			this->REGISTER->Controls->Add(this->textBox3);
			this->REGISTER->Controls->Add(this->textBox4);
			this->REGISTER->Controls->Add(this->label10);
			this->REGISTER->Controls->Add(this->btnRegister);
			this->REGISTER->Controls->Add(this->tbConfirm);
			this->REGISTER->Controls->Add(this->tbUsername);
			this->REGISTER->Controls->Add(this->tbPassword);
			this->REGISTER->Location = System::Drawing::Point(3, 447);
			this->REGISTER->Name = L"REGISTER";
			this->REGISTER->Size = System::Drawing::Size(323, 505);
			this->REGISTER->TabIndex = 60;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(119, 443);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 18);
			this->label16->TabIndex = 25;
			this->label16->Text = L"New user\?";
			// 
			// loginback
			// 
			this->loginback->AutoSize = true;
			this->loginback->BackColor = System::Drawing::Color::Transparent;
			this->loginback->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F));
			this->loginback->ForeColor = System::Drawing::SystemColors::ControlText;
			this->loginback->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->loginback->Location = System::Drawing::Point(119, 461);
			this->loginback->Name = L"loginback";
			this->loginback->Size = System::Drawing::Size(74, 15);
			this->loginback->TabIndex = 24;
			this->loginback->Text = L"CLICK HERE";
			this->loginback->Click += gcnew System::EventHandler(this, &Menus::loginback_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 182);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Name:";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(41, 140);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(35, 13);
			this->lblEmail->TabIndex = 22;
			this->lblEmail->Text = L"Email:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(38, 94);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 21;
			this->lblName->Text = L"Name:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(37, 344);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 23);
			this->textBox2->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(37, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(240, 23);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->textBox4->Location = System::Drawing::Point(37, 244);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(240, 23);
			this->textBox4->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(19, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(281, 67);
			this->label10->TabIndex = 14;
			this->label10->Text = L"SIGN UP";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegister->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnRegister->Location = System::Drawing::Point(37, 394);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(138, 36);
			this->btnRegister->TabIndex = 13;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Menus::btnRegister_Click);
			// 
			// tbConfirm
			// 
			this->tbConfirm->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbConfirm->Location = System::Drawing::Point(37, 296);
			this->tbConfirm->Name = L"tbConfirm";
			this->tbConfirm->Size = System::Drawing::Size(240, 23);
			this->tbConfirm->TabIndex = 8;
			// 
			// tbUsername
			// 
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbUsername->Location = System::Drawing::Point(37, 113);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(240, 23);
			this->tbUsername->TabIndex = 5;
			// 
			// tbPassword
			// 
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbPassword->Location = System::Drawing::Point(37, 193);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(240, 23);
			this->tbPassword->TabIndex = 7;
			// 
			// LOGINPANEL
			// 
			this->LOGINPANEL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->LOGINPANEL->Controls->Add(this->label6);
			this->LOGINPANEL->Controls->Add(this->label13);
			this->LOGINPANEL->Controls->Add(this->lblUser);
			this->LOGINPANEL->Controls->Add(this->txtboxUser);
			this->LOGINPANEL->Controls->Add(this->Signup);
			this->LOGINPANEL->Controls->Add(this->lblPass);
			this->LOGINPANEL->Controls->Add(this->btnSignin);
			this->LOGINPANEL->Controls->Add(this->txtBoxPass);
			this->LOGINPANEL->Location = System::Drawing::Point(21, 36);
			this->LOGINPANEL->Name = L"LOGINPANEL";
			this->LOGINPANEL->Size = System::Drawing::Size(285, 390);
			this->LOGINPANEL->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(101, 331);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"New user\?";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(79, 47);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(128, 38);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Log In";
			// 
			// lblUser
			// 
			this->lblUser->BackColor = System::Drawing::Color::Transparent;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->lblUser->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblUser->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lblUser->Location = System::Drawing::Point(12, 111);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(96, 20);
			this->lblUser->TabIndex = 1;
			this->lblUser->Text = L"USERNAME";
			// 
			// txtboxUser
			// 
			this->txtboxUser->BackColor = System::Drawing::SystemColors::Control;
			this->txtboxUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtboxUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->txtboxUser->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtboxUser->Location = System::Drawing::Point(15, 134);
			this->txtboxUser->Name = L"txtboxUser";
			this->txtboxUser->Size = System::Drawing::Size(252, 22);
			this->txtboxUser->TabIndex = 3;
			// 
			// Signup
			// 
			this->Signup->AutoSize = true;
			this->Signup->BackColor = System::Drawing::Color::Transparent;
			this->Signup->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F));
			this->Signup->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Signup->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Signup->Location = System::Drawing::Point(101, 349);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(74, 15);
			this->Signup->TabIndex = 6;
			this->Signup->Text = L"CLICK HERE";
			this->Signup->Click += gcnew System::EventHandler(this, &Menus::Signup_Click);
			// 
			// lblPass
			// 
			this->lblPass->BackColor = System::Drawing::Color::Transparent;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->lblPass->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblPass->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lblPass->Location = System::Drawing::Point(12, 176);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(96, 17);
			this->lblPass->TabIndex = 2;
			this->lblPass->Text = L"PASSWORD";
			// 
			// btnSignin
			// 
			this->btnSignin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnSignin->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnSignin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnSignin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnSignin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->btnSignin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSignin->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnSignin->Location = System::Drawing::Point(185, 236);
			this->btnSignin->Name = L"btnSignin";
			this->btnSignin->Size = System::Drawing::Size(82, 45);
			this->btnSignin->TabIndex = 5;
			this->btnSignin->Text = L"Sign in";
			this->btnSignin->UseVisualStyleBackColor = false;
			this->btnSignin->Click += gcnew System::EventHandler(this, &Menus::btnSignin_Click);
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->BackColor = System::Drawing::SystemColors::Control;
			this->txtBoxPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->txtBoxPass->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtBoxPass->Location = System::Drawing::Point(15, 196);
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->PasswordChar = '�';
			this->txtBoxPass->Size = System::Drawing::Size(252, 22);
			this->txtBoxPass->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(9, 383);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 23);
			this->label14->TabIndex = 58;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->ForeColor = System::Drawing::SystemColors::Control;
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(0, 362);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 23);
			this->label15->TabIndex = 57;
			// 
			// CMPanel
			// 
			this->CMPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->CMPanel->Controls->Add(this->pictureBox2);
			this->CMPanel->Controls->Add(this->panel11);
			this->CMPanel->Controls->Add(this->button2);
			this->CMPanel->Location = System::Drawing::Point(835, 49);
			this->CMPanel->Name = L"CMPanel";
			this->CMPanel->Size = System::Drawing::Size(436, 521);
			this->CMPanel->TabIndex = 61;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(37, 189);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(351, 220);
			this->pictureBox2->TabIndex = 50;
			this->pictureBox2->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel11->Controls->Add(this->pictureBox5);
			this->panel11->Controls->Add(this->panel13);
			this->panel11->Location = System::Drawing::Point(13, -74);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(401, 268);
			this->panel11->TabIndex = 45;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(10, 79);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(28, 27);
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Transparent;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->Location = System::Drawing::Point(24, 94);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(351, 169);
			this->panel13->TabIndex = 49;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button2->Location = System::Drawing::Point(94, 478);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 40);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Add to cart";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// CPPanel
			// 
			this->CPPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->CPPanel->Controls->Add(this->pictureBox19);
			this->CPPanel->Controls->Add(this->panel14);
			this->CPPanel->Controls->Add(this->button3);
			this->CPPanel->Location = System::Drawing::Point(798, 587);
			this->CPPanel->Name = L"CPPanel";
			this->CPPanel->Size = System::Drawing::Size(436, 521);
			this->CPPanel->TabIndex = 62;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(37, 189);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(351, 220);
			this->pictureBox19->TabIndex = 50;
			this->pictureBox19->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel14->Controls->Add(this->pictureBox32);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Location = System::Drawing::Point(13, -74);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(401, 268);
			this->panel14->TabIndex = 45;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(10, 79);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(28, 27);
			this->pictureBox32->TabIndex = 10;
			this->pictureBox32->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Transparent;
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->Location = System::Drawing::Point(24, 94);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(351, 169);
			this->panel15->TabIndex = 49;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button3->Location = System::Drawing::Point(94, 478);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 40);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Add to cart";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Menus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->ControlBox = false;
			this->Controls->Add(this->CPPanel);
			this->Controls->Add(this->CMPanel);
			this->Controls->Add(this->PanelCap);
			this->Controls->Add(this->REGISTER);
			this->Controls->Add(this->LOGINPANEL);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->panelmf);
			this->Controls->Add(this->Panelcafelatte);
			this->Controls->Add(this->panelOrder);
			this->Controls->Add(this->panelCart);
			this->Controls->Add(this->COFFEEFRAPPES);
			this->Controls->Add(this->COLDDRINKS);
			this->Controls->Add(this->HOTDRINNKS);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->HOME);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Menus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menus";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelCart->ResumeLayout(false);
			this->panelCart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcaffeLatte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBmochaFrappuccino))->EndInit();
			this->pnlBS3->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcappuccino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->SLIDER->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->HOME->ResumeLayout(false);
			this->HOME->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->HOTDRINNKS->ResumeLayout(false);
			this->HOTDRINNKS->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			this->COLDDRINKS->ResumeLayout(false);
			this->COLDDRINKS->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			this->COFFEEFRAPPES->ResumeLayout(false);
			this->COFFEEFRAPPES->PerformLayout();
			this->panelmf->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->PanelCap->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->Panelcafelatte->ResumeLayout(false);
			this->Panelcafelatte->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cap2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->des1))->EndInit();
			this->panelOrder->ResumeLayout(false);
			this->panelOrder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->REGISTER->ResumeLayout(false);
			this->REGISTER->PerformLayout();
			this->LOGINPANEL->ResumeLayout(false);
			this->LOGINPANEL->PerformLayout();
			this->CMPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->CPPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



public: void showPanel(System::Windows::Forms::Panel^ panelToShow) {
	array<System::Windows::Forms::Panel^>^ allPanels = { REGISTER,HOME, HOTDRINNKS, COLDDRINKS, COFFEEFRAPPES, panelCart, panelOrder ,Panelcafelatte,panelmf,PanelCap,CMPanel,CPPanel};

	for each (System::Windows::Forms::Panel ^ panel in allPanels) {
		panel->Hide();
	}

	panelToShow->Show();
}

public: void showItem(System::Windows::Forms::Panel^ panelToShow) {
	array<System::Windows::Forms::Panel^>^ allPanels = {HOME, Panelcafelatte, panelmf, panelCart,PanelCap, CMPanel,CPPanel };

	for each (System::Windows::Forms::Panel ^ panel in allPanels) {
		panel->Hide();
	}

	panelToShow->Show();
}

	

	private: System::Void btnReciept_Click(System::Object^ sender, System::EventArgs^ e) {
	// button for the reciept
	if (dataGridView1->Rows->Count < 1) {
		//if no data is present display a message
		MessageBox::Show("No items in the DataGridView. Please add items before generating a receipt.");
		return; 
	}
	//shows the reciept panel

	//uses the functions to generate a reciept
	order->Reciept();
	order->saveToText();
	
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//builds the order of the customer
	
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//removes the selected row
		order->removeRow();
	}







	private: System::Void printDocument1_(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		//formats the font and size of the printed reciept
		System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
		e->Graphics->DrawString(richTextBox1->Text, fntString, Brushes::Black, 120, 120);
	}

	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		//shows the print dialog box
		printPreviewDialog1->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Exception Type: " + ex->GetType()->Name + "\nMessage: " + ex->Message);

		}
	}


private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	dataGridView1->Rows->Clear();


}

private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	//reset's the components for new order
	richTextBox1->Clear();
	dataGridView1->Rows->Clear();
}


private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}




private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
	SLIDER->Width -= 100;
	HOME->BackColor = System::Drawing::Color::Black;
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (count < 10) {
		SLIDER->Width += 30;
		count++;
		
	}
	else
	{
		timer1->Stop();

	}

}

private: System::Void pictureBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	timer2->Start();
	SLIDER->Width -= 100;
	HOME->BackColor = System::Drawing::Color::FromArgb(42, 14, 36);

}

private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (count > 0) {
		SLIDER->Width -= 30; // Adjust the decrease value as needed
		count--;
	
	}
	else
	{
		timer2->Stop();
	}
	
}





private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(HOTDRINNKS);
}
private: System::Void pictureBox38_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(COLDDRINKS);
}
private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(COFFEEFRAPPES);
}



private: System::Void pictureBox50_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOTDRINNKS);
}
private: System::Void pictureBox51_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(COLDDRINKS);
}
private: System::Void pictureBox49_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(COFFEEFRAPPES);
}


private: System::Void pictureBox66_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOTDRINNKS);
}
private: System::Void pictureBox65_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(COLDDRINKS);
}
private: System::Void pictureBox64_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(COFFEEFRAPPES);
}

private: System::Void pictureBox55_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOME);
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOME);
}
private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(HOME);
}
private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOME);
}




private: System::Void pictureBox15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	showPanel(panelCart);
}
private: System::Void pictureBox70_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(panelCart);
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(panelCart);
}
private: System::Void pictureBox52_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(panelCart);
}
private: System::Void pictureBox40_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(panelCart);
}

private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void PBcappuccino_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	showPanel(panelOrder);
	showItem(PanelCap);

}
private: System::Void PBmochaFrappuccino_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(panelOrder);
	showItem(panelmf);

}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Panelcafelatte->Hide();
	showPanel(HOME);
	panelOrder->Hide();
}
private: System::Void pictureBox6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panelmf->Hide();
	showPanel(HOME);
	panelOrder->Hide();
}


private: System::Void mfbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	Product = "Mocha Frappuccino";
	order->BuildOrder(Product);


}

private: System::Void PBcaffeLatte_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(panelOrder);
	showItem(Panelcafelatte);

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Product = "Capuccino";

	order->BuildOrder(Product);
}
private: System::Void capbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Product = "Cafe lette";

	order->BuildOrder(Product);
}
private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCap->Hide();
	showPanel(HOME);

}

private: System::Void pnlBS1_Click(System::Object^ sender, System::EventArgs^ e) {

	newpanels^ show = gcnew newpanels();

	show->Show();
}

private: System::Void btnSignin_Click(System::Object^ sender, System::EventArgs^ e) {
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

			showPanel(HOME);
			lblUsername->Text = username;

		}
		else {
			//message box for user error
			MessageBox::Show("Invalid username or password. Please try again.");

		}
	}
	catch (IOException^ e) {
		//message box for failed file reading
		MessageBox::Show("Error accessing the file: " + e->Message);
	}


}


private: System::Void Signup_Click(System::Object^ sender, System::EventArgs^ e) {
	showPanel(REGISTER);

}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	array<TextBox^>^ textBoxes = { tbUsername, tbPassword, tbConfirm };
	//iterates the text boxes 
	for each (TextBox ^ textBox in textBoxes) {
		//removes the white spaces
		String^ text = textBox->Text->Trim();
		if (String::IsNullOrEmpty(text) || String::IsNullOrWhiteSpace(text)) {
			MessageBox::Show("Please fill in all the fields.");
			return; // Stop further processing if any field is empty
		}
	}
	//checks if the values are the same in the password and confirm password
	if (tbPassword->Text->Trim() != tbConfirm->Text->Trim()) {
		MessageBox::Show("Passwords do not match.");
		return; // Stop further processing if passwords do not match
	}
	//checks if account exists
	try {
		if (File::Exists(filePath)) {

			//assigns string to store all accounts
			String^ Accounts = File::ReadAllText(filePath);
			//assigns a string for the newly created account
			String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();

			//checks if an account already exists
			if (Accounts->Contains(newAccount)) {
				//message box if account already exists
				MessageBox::Show("Account already exists.");
				return; // Stop further processing if account already exists
			}
		}

		//initializes file writer
		StreamWriter^ file = gcnew StreamWriter(filePath, true);
		//assigns a string for the newly created account
		String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();
		//writes the new account to the file
		file->WriteLine(newAccount);

		file->Close();
		//message box for successful creation
		MessageBox::Show("Account created successfully!");
		showPanel(LOGINPANEL);
	}
	//error message box for failed file handling
	catch (IOException^ ex) {
		MessageBox::Show("Error accessing the file: " + ex->Message);
	}
}
private: System::Void loginback_Click(System::Object^ sender, System::EventArgs^ e) {

	showPanel(LOGINPANEL);
}
private: System::Void mfbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {

	Product = "Mocha Frappe";
	order->BuildOrder(Product);
}
private: System::Void cafelattebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Product = "Cappuccino";
	order->BuildOrder(Product);
}
private: System::Void capbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Product = "Cafe Latte";
	order->BuildOrder(Product);
}
private: System::Void pictureBox6_Click_2(System::Object^ sender, System::EventArgs^ e) {

	showPanel(HOME);
}


private: System::Void pictureBox7_Click_2(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOME);
}
private: System::Void pictureBox18_Click_1(System::Object^ sender, System::EventArgs^ e) {
	showPanel(HOME);
}
};
}
