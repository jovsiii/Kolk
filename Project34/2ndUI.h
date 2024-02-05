#pragma once
#include"Menus.h"
#include"2ndUI.h"
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for My2ndUI
	/// </summary>
	public ref class My2ndUI : public System::Windows::Forms::Form
	{

	public:
		My2ndUI()
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
		~My2ndUI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panelmf;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ mfbtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(My2ndUI::typeid));
			this->panelmf = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->mfbtn = (gcnew System::Windows::Forms::Button());
			this->panelmf->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmf
			// 
			this->panelmf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panelmf->Controls->Add(this->pictureBox1);
			this->panelmf->Controls->Add(this->panel1);
			this->panelmf->Controls->Add(this->mfbtn);
			this->panelmf->Location = System::Drawing::Point(40, 12);
			this->panelmf->Name = L"panelmf";
			this->panelmf->Size = System::Drawing::Size(436, 521);
			this->panelmf->TabIndex = 48;
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
			this->mfbtn->Click += gcnew System::EventHandler(this, &My2ndUI::mfbtn_Click);
			// 
			// My2ndUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 756);
			this->Controls->Add(this->panelmf);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"My2ndUI";
			this->Text = L"My2ndUI";
			this->Load += gcnew System::EventHandler(this, &My2ndUI::My2ndUI_Load);
			this->panelmf->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void My2ndUI_Load(System::Object^ sender, System::EventArgs^ e) {

	}

private: System::Void mfbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
