

#pragma once
#include "Customer.h"
#include <msclr/marshal_cppstd.h>
//#include "String.h"



namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ NameTb;




	private: System::Windows::Forms::TextBox^ PhoneTb;
	private: System::Windows::Forms::TextBox^ addressTb;


	private: System::Windows::Forms::TextBox^ EmailTb;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ userNameTb;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ passwordTb;
	private: System::Windows::Forms::Button^ SubmitBtn;


	private: System::Windows::Forms::ComboBox^ sexTb;
	private: System::Windows::Forms::TextBox^ AccountNumberTb;

	private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::DateTimePicker^ DateofBirthTb;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->NameTb = (gcnew System::Windows::Forms::TextBox());
            this->PhoneTb = (gcnew System::Windows::Forms::TextBox());
            this->addressTb = (gcnew System::Windows::Forms::TextBox());
            this->EmailTb = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->userNameTb = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->passwordTb = (gcnew System::Windows::Forms::TextBox());
            this->SubmitBtn = (gcnew System::Windows::Forms::Button());
            this->sexTb = (gcnew System::Windows::Forms::ComboBox());
            this->AccountNumberTb = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->DateofBirthTb = (gcnew System::Windows::Forms::DateTimePicker());
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::DarkGreen;
            this->tableLayoutPanel1->ColumnCount = 1;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(93, 769);
            this->tableLayoutPanel1->TabIndex = 0;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Register::tableLayoutPanel1_Paint);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::DarkGreen;
            this->label1->Location = System::Drawing::Point(575, 44);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(179, 54);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Đăng ký";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::DarkGreen;
            this->label2->Location = System::Drawing::Point(187, 134);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(90, 37);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Name";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::DarkGreen;
            this->label3->Location = System::Drawing::Point(705, 240);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(60, 37);
            this->label3->TabIndex = 3;
            this->label3->Text = L"Sex";
            this->label3->Click += gcnew System::EventHandler(this, &Register::label3_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::DarkGreen;
            this->label4->Location = System::Drawing::Point(705, 134);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(115, 37);
            this->label4->TabIndex = 4;
            this->label4->Text = L"Address";
            this->label4->Click += gcnew System::EventHandler(this, &Register::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::DarkGreen;
            this->label5->Location = System::Drawing::Point(705, 287);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 37);
            this->label5->TabIndex = 5;
            this->label5->Click += gcnew System::EventHandler(this, &Register::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::DarkGreen;
            this->label6->Location = System::Drawing::Point(199, 287);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(203, 37);
            this->label6->TabIndex = 6;
            this->label6->Text = L"Phone Number";
            this->label6->Click += gcnew System::EventHandler(this, &Register::label6_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::DarkGreen;
            this->label7->Location = System::Drawing::Point(152, 513);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 37);
            this->label7->TabIndex = 7;
            // 
            // NameTb
            // 
            this->NameTb->Location = System::Drawing::Point(193, 192);
            this->NameTb->Margin = System::Windows::Forms::Padding(4);
            this->NameTb->Name = L"NameTb";
            this->NameTb->Size = System::Drawing::Size(319, 22);
            this->NameTb->TabIndex = 8;
            this->NameTb->TextChanged += gcnew System::EventHandler(this, &Register::NameTb_TextChanged);
            // 
            // PhoneTb
            // 
            this->PhoneTb->Location = System::Drawing::Point(205, 345);
            this->PhoneTb->Margin = System::Windows::Forms::Padding(4);
            this->PhoneTb->Name = L"PhoneTb";
            this->PhoneTb->Size = System::Drawing::Size(307, 22);
            this->PhoneTb->TabIndex = 10;
            // 
            // addressTb
            // 
            this->addressTb->Location = System::Drawing::Point(712, 192);
            this->addressTb->Margin = System::Windows::Forms::Padding(4);
            this->addressTb->Name = L"addressTb";
            this->addressTb->Size = System::Drawing::Size(583, 22);
            this->addressTb->TabIndex = 11;
            // 
            // EmailTb
            // 
            this->EmailTb->Location = System::Drawing::Point(712, 494);
            this->EmailTb->Margin = System::Windows::Forms::Padding(4);
            this->EmailTb->Name = L"EmailTb";
            this->EmailTb->Size = System::Drawing::Size(247, 22);
            this->EmailTb->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::DarkGreen;
            this->label8->Location = System::Drawing::Point(199, 438);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(173, 37);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Date of Birth";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::DarkGreen;
            this->label9->Location = System::Drawing::Point(705, 451);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(83, 37);
            this->label9->TabIndex = 15;
            this->label9->Text = L"Email";
            // 
            // userNameTb
            // 
            this->userNameTb->Location = System::Drawing::Point(205, 606);
            this->userNameTb->Margin = System::Windows::Forms::Padding(4);
            this->userNameTb->Name = L"userNameTb";
            this->userNameTb->Size = System::Drawing::Size(247, 22);
            this->userNameTb->TabIndex = 16;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::DarkGreen;
            this->label10->Location = System::Drawing::Point(198, 565);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(140, 37);
            this->label10->TabIndex = 17;
            this->label10->Text = L"Username";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::DarkGreen;
            this->label11->Location = System::Drawing::Point(705, 565);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(132, 37);
            this->label11->TabIndex = 18;
            this->label11->Text = L"Password";
            // 
            // passwordTb
            // 
            this->passwordTb->Location = System::Drawing::Point(712, 606);
            this->passwordTb->Margin = System::Windows::Forms::Padding(4);
            this->passwordTb->Name = L"passwordTb";
            this->passwordTb->Size = System::Drawing::Size(247, 22);
            this->passwordTb->TabIndex = 19;
            this->passwordTb->TextChanged += gcnew System::EventHandler(this, &Register::textBox8_TextChanged);
            // 
            // SubmitBtn
            // 
            this->SubmitBtn->BackColor = System::Drawing::Color::DarkGreen;
            this->SubmitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SubmitBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->SubmitBtn->Location = System::Drawing::Point(473, 668);
            this->SubmitBtn->Margin = System::Windows::Forms::Padding(4);
            this->SubmitBtn->Name = L"SubmitBtn";
            this->SubmitBtn->Size = System::Drawing::Size(208, 55);
            this->SubmitBtn->TabIndex = 20;
            this->SubmitBtn->Text = L"Submit";
            this->SubmitBtn->UseVisualStyleBackColor = false;
            this->SubmitBtn->Click += gcnew System::EventHandler(this, &Register::SubmitBtn_Click_1);
            // 
            // sexTb
            // 
            this->sexTb->FormattingEnabled = true;
            this->sexTb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"male", L"female" });
            this->sexTb->Location = System::Drawing::Point(712, 298);
            this->sexTb->Margin = System::Windows::Forms::Padding(4);
            this->sexTb->Name = L"sexTb";
            this->sexTb->Size = System::Drawing::Size(213, 24);
            this->sexTb->TabIndex = 21;
            this->sexTb->SelectedIndexChanged += gcnew System::EventHandler(this, &Register::sexTb_SelectedIndexChanged);
            // 
            // AccountNumberTb
            // 
            this->AccountNumberTb->Location = System::Drawing::Point(712, 411);
            this->AccountNumberTb->Margin = System::Windows::Forms::Padding(4);
            this->AccountNumberTb->Name = L"AccountNumberTb";
            this->AccountNumberTb->Size = System::Drawing::Size(247, 22);
            this->AccountNumberTb->TabIndex = 22;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::DarkGreen;
            this->label12->Location = System::Drawing::Point(705, 370);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(220, 37);
            this->label12->TabIndex = 23;
            this->label12->Text = L"AccountNumber";
            // 
            // DateofBirthTb
            // 
            this->DateofBirthTb->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->DateofBirthTb->CalendarForeColor = System::Drawing::SystemColors::MenuText;
            this->DateofBirthTb->CalendarTitleForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->DateofBirthTb->CustomFormat = L"MM/dd/yyyy";
            this->DateofBirthTb->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->DateofBirthTb->Location = System::Drawing::Point(205, 492);
            this->DateofBirthTb->Margin = System::Windows::Forms::Padding(0);
            this->DateofBirthTb->Name = L"DateofBirthTb";
            this->DateofBirthTb->Size = System::Drawing::Size(234, 22);
            this->DateofBirthTb->TabIndex = 24;
            this->DateofBirthTb->ValueChanged += gcnew System::EventHandler(this, &Register::DateofBirthTb_ValueChanged);
            // 
            // Register
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1357, 767);
            this->Controls->Add(this->DateofBirthTb);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->AccountNumberTb);
            this->Controls->Add(this->sexTb);
            this->Controls->Add(this->SubmitBtn);
            this->Controls->Add(this->passwordTb);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->userNameTb);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->EmailTb);
            this->Controls->Add(this->addressTb);
            this->Controls->Add(this->PhoneTb);
            this->Controls->Add(this->NameTb);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Register";
            this->Text = L"Register";
            this->Load += gcnew System::EventHandler(this, &Register::MyForm1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sexTb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void SubmitBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (NameTb->Text == "" || addressTb->Text == "" || DateofBirthTb->Text == "" || EmailTb->Text == "" || userNameTb->Text == "" || passwordTb->Text == "" || sexTb->SelectedItem == nullptr) {
			MessageBox::Show("Missing Information");
		}
		else {
			try {
				using namespace System::Runtime::InteropServices;
               
				string name = msclr::interop::marshal_as<string>(NameTb->Text);
				string address = msclr::interop::marshal_as<string>(addressTb->Text);
				string dateOfBirth = msclr::interop::marshal_as<string>(DateofBirthTb->Text);
				string email = msclr::interop::marshal_as<string>(EmailTb->Text);
				string username = msclr::interop::marshal_as<string>(userNameTb->Text);
				string password = msclr::interop::marshal_as<string>(passwordTb->Text);
				string sex = msclr::interop::marshal_as<string>(sexTb->Text);
				string phone = msclr::interop::marshal_as<string>(PhoneTb->Text);
				string accountNumber= msclr::interop::marshal_as<string>(AccountNumberTb->Text);

				Customer user = Customer(name, std::to_string(1), sex, address, phone, dateOfBirth, email, username, password,accountNumber );
        
				user.saveCustomerToFile();
			}
			catch (Exception^ Ex) {
				MessageBox::Show(Ex->Message);
			}
		}
	}
	private: System::Void NameTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
    private: System::Void DateofBirthTb_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
