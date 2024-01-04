#pragma once
#include "HomePage.h"
namespace LoginForm {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtpassward;
	private: System::Windows::Forms::TextBox^ txtusername;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Login;



	private:
		String^ Username = "nabilkhan";
		String^ passward = "khan123";
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtpassward = (gcnew System::Windows::Forms::TextBox());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Login = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(856, 210);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(256, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(256, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Passward";
			// 
			// txtpassward
			// 
			this->txtpassward->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpassward->Location = System::Drawing::Point(458, 301);
			this->txtpassward->Name = L"txtpassward";
			this->txtpassward->PasswordChar = '*';
			this->txtpassward->Size = System::Drawing::Size(234, 22);
			this->txtpassward->TabIndex = 2;
			// 
			// txtusername
			// 
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusername->Location = System::Drawing::Point(458, 260);
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(234, 22);
			this->txtusername->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(585, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Forget Passward\?";
			// 
			// btn_Login
			// 
			this->btn_Login->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btn_Login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Login->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Login->Location = System::Drawing::Point(458, 386);
			this->btn_Login->Name = L"btn_Login";
			this->btn_Login->Size = System::Drawing::Size(234, 52);
			this->btn_Login->TabIndex = 3;
			this->btn_Login->Text = L"Login";
			this->btn_Login->UseVisualStyleBackColor = false;
			this->btn_Login->Click += gcnew System::EventHandler(this, &MyForm::btn_Login_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(864, 545);
			this->Controls->Add(this->btn_Login);
			this->Controls->Add(this->txtusername);
			this->Controls->Add(this->txtpassward);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class Credentail {
		private:
			String^ Username = "nabilkhan";
			String^ passward = "khan123";
		public:
			String^ getUsername() {
				return this->Username;
			}
			String^ getpassward() {
				return this->passward;
			}





		};
#pragma endregion
	private: System::Void btn_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		Credentail^ obj1= gcnew Credentail;
		if (txtusername->Text == obj1->getUsername() && txtpassward->Text == obj1->getpassward())
		{
			String^ Username = txtusername->Text;
			String^ passward = txtpassward->Text;
			MessageBox::Show("Login Succesfull");
			HomePage obj;
			this->Hide();
			obj.ShowDialog();
		}
		else if (txtusername->Text != Username || txtpassward->Text != passward)
		{
			MessageBox::Show(" Invalid Username Or passward ");
		}
	}
};
}
