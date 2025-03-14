#pragma once
#include "Register.h"
#include "Customer.h"
#include "MainClient.h"
#include <msclr/marshal_cppstd.h>
namespace BankingSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Login
    /// </summary>
    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void)
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
        ~Login()
        {
            if (components)
            {
                delete components;
            }
        }


    private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
    private: System::Windows::Forms::Panel^ panel1;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label3;

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;


    private: System::Windows::Forms::Label^ label6;
    private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
    private: System::Windows::Forms::Panel^ panel;


    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ ResBtn;


    protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->ResBtn = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
            this->panel = (gcnew System::Windows::Forms::Panel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
      
            this->panel1->Controls->Add(this->ResBtn);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(1, 1);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(432, 537);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel1_Paint);
            // 
            // ResBtn
            // 
            this->ResBtn->Location = System::Drawing::Point(197, 469);
            this->ResBtn->Name = L"ResBtn";
            this->ResBtn->Size = System::Drawing::Size(75, 23);
            this->ResBtn->TabIndex = 7;
            this->ResBtn->Text = L"button3";
            this->ResBtn->UseVisualStyleBackColor = true;
            this->ResBtn->Click += gcnew System::EventHandler(this, &Login::ResBtn_Click);
            // 
            // button1
            // 
            this->button1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
            this->button1->BackColor = System::Drawing::Color::Goldenrod;
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button1->Enabled = false;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkGoldenrod;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button1->Location = System::Drawing::Point(142, 365);
            this->button1->Name = L"button1";
            this->button1->Padding = System::Windows::Forms::Padding(5, 3, 5, 5);
            this->button1->Size = System::Drawing::Size(120, 49);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Register";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label4->Location = System::Drawing::Point(160, 345);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(108, 22);
            this->label4->TabIndex = 5;
            this->label4->Text = L"No Account\?";
            this->label4->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label3->Location = System::Drawing::Point(103, 242);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(255, 22);
            this->label3->TabIndex = 4;
            this->label3->Text = L"It\'s about Thinking, not Typoing";
            this->label3->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Cursor = System::Windows::Forms::Cursors::Default;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label1->Location = System::Drawing::Point(37, 178);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(369, 53);
            this->label1->TabIndex = 2;
            this->label1->Text = L"BANKING SYSTEM";
            this->label1->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Cursor = System::Windows::Forms::Cursors::Default;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label5->Location = System::Drawing::Point(529, 51);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(177, 63);
            this->label5->TabIndex = 3;
            this->label5->Text = L"Sign in";
            this->label5->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label6->Location = System::Drawing::Point(534, 118);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(421, 44);
            this->label6->TabIndex = 6;
            this->label6->Text = L"Sign in to your account so that we can import setting\r\nand preferences and adjust"
                L" your experience";
            this->label6->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // panel
            // 
            this->panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)));
            this->panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel->Controls->Add(this->textBox1);
            this->panel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->panel->Location = System::Drawing::Point(538, 186);
            this->panel->Name = L"panel";
            this->panel->Size = System::Drawing::Size(387, 58);
            this->panel->TabIndex = 7;
            this->panel->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            this->panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel2_Paint);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::MenuBar;
            this->textBox1->Location = System::Drawing::Point(22, 18);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(328, 25);
            this->textBox1->TabIndex = 0;
            this->textBox1->Text = L"Username";
            this->textBox1->Click += gcnew System::EventHandler(this, &Login::textBox1_Click);
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged_1);
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->textBox2);
            this->panel3->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->panel3->Location = System::Drawing::Point(538, 262);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(387, 58);
            this->panel3->TabIndex = 7;
            this->panel3->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel2_Paint);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text Semibold", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::SystemColors::MenuBar;
            this->textBox2->Location = System::Drawing::Point(22, 18);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(328, 25);
            this->textBox2->TabIndex = 0;
            this->textBox2->Text = L"Password";
            this->textBox2->Click += gcnew System::EventHandler(this, &Login::textBox2_Click);
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged_1);
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->BackColor = System::Drawing::Color::Transparent;
            this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::White;
            this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->checkBox1->ForeColor = System::Drawing::Color::Olive;
            this->checkBox1->Location = System::Drawing::Point(625, 330);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(15, 14);
            this->checkBox1->TabIndex = 8;
            this->checkBox1->UseVisualStyleBackColor = false;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
            this->checkBox1->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->label2->Location = System::Drawing::Point(644, 329);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(238, 19);
            this->label2->TabIndex = 6;
            this->label2->Text = L"I agree to the terms and conditions";
            this->label2->Click += gcnew System::EventHandler(this, &Login::OtherClick);
            // 
            // button2
            // 
            this->button2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
            this->button2->BackColor = System::Drawing::Color::Khaki;
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button2->Enabled = false;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkGoldenrod;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button2->Location = System::Drawing::Point(538, 368);
            this->button2->Name = L"button2";
            this->button2->Padding = System::Windows::Forms::Padding(3);
            this->button2->Size = System::Drawing::Size(387, 47);
            this->button2->TabIndex = 6;
            this->button2->Text = L"Sign in";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Login::LognInBtnClick);
            // 
            // Login
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1047, 539);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->panel1);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MaximizeBox = false;
            this->Name = L"Login";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Sign in";
            this->Load += gcnew System::EventHandler(this, &Login::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel->ResumeLayout(false);
            this->panel->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    //public:bool switchForm = false;
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       
    }
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        if (checkBox1->Checked) {
            button2->Enabled = true;
            button2->BackColor = Color::Goldenrod;

        }
        else {
            button2->Enabled = false;
            button2->BackColor = Color::Khaki;
        }
    }
    private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text == "Username") {
            textBox1->Text = "";
        }
        if (textBox2->Text == "") {
            textBox2->Text = "Password";

        }

    }
    private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox2->Text == "Password") {
            textBox2->Text = "";
            textBox2->PasswordChar = '*';
        }
        if (textBox1->Text == "") {
            textBox1->Text = "Username";
        }
    }

    private: System::Void OtherClick(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text == "")
        {
            textBox1->Text = "Username";
        }
        if (textBox2->Text == "")
        {
            textBox2->Text = "Password";
        }

    }

    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void LognInBtnClick(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text == "Username" || textBox2->Text == "Password" || textBox1->Text==""||textBox2->Text=="") {
            MessageBox::Show("Please fill in the required fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            string username = msclr::interop::marshal_as<string>(textBox1->Text);
            string password = msclr::interop::marshal_as<string>(textBox2->Text);
            Customer userL = Customer(username, password);
            if (userL.checkLogin()) {
                MessageBox::Show("Login Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                this->Hide();
                MainClient^ main = gcnew MainClient();
                main->Show();
            }
            else {
                MessageBox::Show("Login Failed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                
        }

       
    }
   
    }
private: System::Void ResBtn_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Register^ reg = gcnew Register();
    reg->Show();
}
};
}


