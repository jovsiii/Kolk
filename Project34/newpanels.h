#pragma once

namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newpanels
	/// </summary>
	public ref class newpanels : public System::Windows::Forms::Form
	{
	public:
		newpanels(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~newpanels()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ REWARD;
	protected:
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::PictureBox^ pictureBox72;
	private: System::Windows::Forms::PictureBox^ pictureBox73;
	private: System::Windows::Forms::PictureBox^ pictureBox74;
	private: System::Windows::Forms::PictureBox^ pictureBox75;
	private: System::Windows::Forms::PictureBox^ pictureBox76;
	private: System::Windows::Forms::PictureBox^ pictureBox77;
	private: System::Windows::Forms::PictureBox^ pictureBox78;
	private: System::Windows::Forms::PictureBox^ pictureBox79;
	private: System::Windows::Forms::PictureBox^ pictureBox80;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::PictureBox^ pictureBox81;
	private: System::Windows::Forms::PictureBox^ pictureBox82;
	private: System::Windows::Forms::PictureBox^ pictureBox83;
	private: System::Windows::Forms::PictureBox^ pictureBox84;
	private: System::Windows::Forms::Label^ Coins;
	private: System::Windows::Forms::PictureBox^ pictureBox85;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::PictureBox^ pictureBox86;

	protected:


























	protected:
































































































































	protected:


























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(newpanels::typeid));
			this->REWARD = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->Coins = (gcnew System::Windows::Forms::Label());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->REWARD->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			this->SuspendLayout();
			// 
			// REWARD
			// 
			this->REWARD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->REWARD->Controls->Add(this->panel11);
			this->REWARD->Controls->Add(this->pictureBox77);
			this->REWARD->Controls->Add(this->pictureBox78);
			this->REWARD->Controls->Add(this->pictureBox79);
			this->REWARD->Controls->Add(this->pictureBox80);
			this->REWARD->Controls->Add(this->label31);
			this->REWARD->Controls->Add(this->pictureBox81);
			this->REWARD->Controls->Add(this->pictureBox82);
			this->REWARD->Controls->Add(this->pictureBox83);
			this->REWARD->Controls->Add(this->pictureBox84);
			this->REWARD->Controls->Add(this->Coins);
			this->REWARD->Controls->Add(this->pictureBox85);
			this->REWARD->Controls->Add(this->label33);
			this->REWARD->Controls->Add(this->label34);
			this->REWARD->Controls->Add(this->pictureBox86);
			this->REWARD->Location = System::Drawing::Point(54, 12);
			this->REWARD->Name = L"REWARD";
			this->REWARD->Size = System::Drawing::Size(414, 820);
			this->REWARD->TabIndex = 44;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->pictureBox72);
			this->panel11->Controls->Add(this->pictureBox73);
			this->panel11->Controls->Add(this->pictureBox74);
			this->panel11->Controls->Add(this->pictureBox75);
			this->panel11->Controls->Add(this->pictureBox76);
			this->panel11->Location = System::Drawing::Point(65, 726);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(287, 58);
			this->panel11->TabIndex = 46;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(84, 22);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(25, 19);
			this->pictureBox72->TabIndex = 32;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(41, 21);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(28, 23);
			this->pictureBox73->TabIndex = 27;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(226, 20);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(20, 21);
			this->pictureBox74->TabIndex = 7;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(171, 23);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(32, 18);
			this->pictureBox75->TabIndex = 6;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(126, 18);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(26, 26);
			this->pictureBox76->TabIndex = 5;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(212, 452);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(185, 66);
			this->pictureBox77->TabIndex = 45;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(21, 452);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(185, 66);
			this->pictureBox78->TabIndex = 44;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(210, 380);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(185, 66);
			this->pictureBox79->TabIndex = 43;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(21, 380);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(185, 66);
			this->pictureBox80->TabIndex = 42;
			this->pictureBox80->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(17, 344);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(83, 23);
			this->label31->TabIndex = 41;
			this->label31->Text = L"Vouchers";
			// 
			// pictureBox81
			// 
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(285, 139);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(110, 154);
			this->pictureBox81->TabIndex = 40;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(152, 139);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(110, 154);
			this->pictureBox82->TabIndex = 39;
			this->pictureBox82->TabStop = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(21, 139);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(110, 154);
			this->pictureBox83->TabIndex = 38;
			this->pictureBox83->TabStop = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(339, 99);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(29, 24);
			this->pictureBox84->TabIndex = 37;
			this->pictureBox84->TabStop = false;
			// 
			// Coins
			// 
			this->Coins->AutoSize = true;
			this->Coins->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->Coins->ForeColor = System::Drawing::Color::White;
			this->Coins->Location = System::Drawing::Point(365, 99);
			this->Coins->Name = L"Coins";
			this->Coins->Size = System::Drawing::Size(30, 23);
			this->Coins->TabIndex = 36;
			this->Coins->Text = L"20";
			// 
			// pictureBox85
			// 
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(365, 41);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(30, 25);
			this->pictureBox85->TabIndex = 35;
			this->pictureBox85->TabStop = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(17, 99);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(71, 23);
			this->label33->TabIndex = 34;
			this->label33->Text = L"Reward";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label34->Location = System::Drawing::Point(51, 37);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(72, 29);
			this->label34->TabIndex = 33;
			this->label34->Text = L"Menu";
			// 
			// pictureBox86
			// 
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(21, 41);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(24, 23);
			this->pictureBox86->TabIndex = 32;
			this->pictureBox86->TabStop = false;
			// 
			// newpanels
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1518, 838);
			this->Controls->Add(this->REWARD);
			this->Name = L"newpanels";
			this->Text = L"newpanels";
			this->REWARD->ResumeLayout(false);
			this->REWARD->PerformLayout();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
