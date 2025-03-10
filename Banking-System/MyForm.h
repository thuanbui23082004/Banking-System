#pragma once

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CustomerBtn;
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
			this->CustomerBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CustomerBtn
			// 
			this->CustomerBtn->Location = System::Drawing::Point(316, 328);
			this->CustomerBtn->Name = L"CustomerBtn";
			this->CustomerBtn->Size = System::Drawing::Size(75, 23);
			this->CustomerBtn->TabIndex = 0;
			this->CustomerBtn->Text = L"button1";
			this->CustomerBtn->UseVisualStyleBackColor = true;
			this->CustomerBtn->Click += gcnew System::EventHandler(this, &MyForm::CustomerBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 555);
			this->Controls->Add(this->CustomerBtn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool switchForm = false;

	private: System::Void CustomerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->switchForm = true;
	}
	};
}
