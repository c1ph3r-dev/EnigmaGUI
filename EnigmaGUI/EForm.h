#pragma once

#include <Enigma/Enigma.h>
#include <msclr\marshal_cppstd.h>

namespace EnigmaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Enigma::Core encrypter{};
	

	/// <summary>
	/// Summary for EForm
	/// </summary>
	public ref class EForm : public System::Windows::Forms::Form
	{
	public:
		EForm(void)
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
		~EForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Label^ labelRot;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


		   int rotCount{ 0 };
		   int rot1, rot2, rot3;
	private: System::Windows::Forms::Label^ labelRot1;
	private: System::Windows::Forms::Label^ labelRot2;
	private: System::Windows::Forms::TextBox^ inputText;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ outText;



	private: System::Windows::Forms::Label^ labelRot3;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->labelRot = (gcnew System::Windows::Forms::Label());
			this->labelRot1 = (gcnew System::Windows::Forms::Label());
			this->labelRot2 = (gcnew System::Windows::Forms::Label());
			this->labelRot3 = (gcnew System::Windows::Forms::Label());
			this->inputText = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->outText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1041, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(120, 41);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Rotor 1";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &EForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(1041, 77);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(120, 41);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Rotor 2";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &EForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(1041, 124);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(120, 41);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Rotor 3";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &EForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(1041, 171);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(120, 41);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Rotor 4";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &EForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(1041, 218);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(120, 41);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Rotor 5";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &EForm::checkBox5_CheckedChanged);
			// 
			// labelRot
			// 
			this->labelRot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelRot->AutoSize = true;
			this->labelRot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRot->Location = System::Drawing::Point(1042, 262);
			this->labelRot->Name = L"labelRot";
			this->labelRot->Size = System::Drawing::Size(74, 20);
			this->labelRot->TabIndex = 5;
			this->labelRot->Text = L"Rotors -";
			// 
			// labelRot1
			// 
			this->labelRot1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelRot1->AutoSize = true;
			this->labelRot1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelRot1->Location = System::Drawing::Point(1112, 262);
			this->labelRot1->Name = L"labelRot1";
			this->labelRot1->Size = System::Drawing::Size(19, 20);
			this->labelRot1->TabIndex = 6;
			this->labelRot1->Text = L"\?";
			// 
			// labelRot2
			// 
			this->labelRot2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelRot2->AutoSize = true;
			this->labelRot2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelRot2->Location = System::Drawing::Point(1137, 262);
			this->labelRot2->Name = L"labelRot2";
			this->labelRot2->Size = System::Drawing::Size(19, 20);
			this->labelRot2->TabIndex = 7;
			this->labelRot2->Text = L"\?";
			// 
			// labelRot3
			// 
			this->labelRot3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelRot3->AutoSize = true;
			this->labelRot3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelRot3->Location = System::Drawing::Point(1162, 262);
			this->labelRot3->Name = L"labelRot3";
			this->labelRot3->Size = System::Drawing::Size(19, 20);
			this->labelRot3->TabIndex = 8;
			this->labelRot3->Text = L"\?";
			// 
			// inputText
			// 
			this->inputText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputText->Location = System::Drawing::Point(13, 13);
			this->inputText->Name = L"inputText";
			this->inputText->Size = System::Drawing::Size(1000, 29);
			this->inputText->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(432, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Encrypt/Decrypt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EForm::button1_Click);
			// 
			// outText
			// 
			this->outText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->outText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outText->Location = System::Drawing::Point(12, 77);
			this->outText->Name = L"outText";
			this->outText->Size = System::Drawing::Size(1000, 29);
			this->outText->TabIndex = 13;
			// 
			// EForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 636);
			this->Controls->Add(this->outText);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->inputText);
			this->Controls->Add(this->labelRot3);
			this->Controls->Add(this->labelRot2);
			this->Controls->Add(this->labelRot1);
			this->Controls->Add(this->labelRot);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"EForm";
			this->Text = L"EForm";
			this->Load += gcnew System::EventHandler(this, &EForm::EForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: void DisableRotors()
	{
		if(!checkBox1->Checked)
			checkBox1->Enabled = false;
		if (!checkBox2->Checked)
			checkBox2->Enabled = false;
		if (!checkBox3->Checked)
			checkBox3->Enabled = false;
		if (!checkBox4->Checked)
			checkBox4->Enabled = false;
		if (!checkBox5->Checked)
		checkBox5->Enabled = false;

		encrypter.GenNewRotorsModules(rot1, rot2, rot3);
		inputText->Enabled = true;
	}
	private: void EnableRotors()
	{
		inputText->Enabled = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
	}

	private: System::Void EForm_Load(System::Object^ sender, System::EventArgs^ e) {
		encrypter.SetRotorDataPath("RotorModules");
		encrypter.GenNewPairModule();

		outText->ReadOnly = true;
		inputText->Enabled = false;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		bool temp = checkBox1->Checked;
		
		if (temp)
		{
			rotCount++;
			if (rot1 == 0)
			{
				rot1 = 1;
				labelRot1->Text = System::Convert::ToString(rot1);
			}
			else if (rot2 == 0)
			{
				rot2 = 1;
				labelRot2->Text = System::Convert::ToString(rot2);
			}
			else
			{
				rot3 = 1;
				labelRot3->Text = System::Convert::ToString(rot3);
			}

			if (rotCount == 3)
				DisableRotors();
		}
		else
		{
			if (rotCount == 3)
				EnableRotors();

			rotCount--;

			if (rot1 == 1)
			{
				rot1 = 0;
				labelRot1->Text = L"?";
			}
			else if (rot2 == 1)
			{
				rot2 = 0;
				labelRot2->Text = L"?";
			}
			else
			{
				rot3 = 0;
				labelRot3->Text = L"?";
			}
			
		}
			
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool temp = checkBox2->Checked;

	if (temp)
	{
		rotCount++;
		if (rot1 == 0)
		{
			rot1 = 2;
			labelRot1->Text = System::Convert::ToString(rot1);
		}
		else if (rot2 == 0)
		{
			rot2 = 2;
			labelRot2->Text = System::Convert::ToString(rot2);
		}
		else
		{
			rot3 = 2;
			labelRot3->Text = System::Convert::ToString(rot3);
		}

		if (rotCount == 3)
			DisableRotors();
	}
	else
	{
		if (rotCount == 3)
			EnableRotors();

		rotCount--;

		if (rot1 == 2)
		{
			rot1 = 0;
			labelRot1->Text = L"?";
		}
		else if (rot2 == 2)
		{
			rot2 = 0;
			labelRot2->Text = L"?";
		}
		else
		{
			rot3 = 0;
			labelRot3->Text = L"?";
		}

	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool temp = checkBox3->Checked;

	if (temp)
	{
		rotCount++;
		if (rot1 == 0)
		{
			rot1 = 3;
			labelRot1->Text = System::Convert::ToString(rot1);
		}
		else if (rot2 == 0)
		{
			rot2 = 3;
			labelRot2->Text = System::Convert::ToString(rot2);
		}
		else
		{
			rot3 = 3;
			labelRot3->Text = System::Convert::ToString(rot3);
		}

		if (rotCount == 3)
			DisableRotors();
	}
	else
	{
		if (rotCount == 3)
			EnableRotors();

		rotCount--;

		if (rot1 == 3)
		{
			rot1 = 0;
			labelRot1->Text = L"?";
		}
		else if (rot2 == 3)
		{
			rot2 = 0;
			labelRot2->Text = L"?";
		}
		else
		{
			rot3 = 0;
			labelRot3->Text = L"?";
		}

	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool temp = checkBox4->Checked;

	if (temp)
	{
		rotCount++;
		if (rot1 == 0)
		{
			rot1 = 4;
			labelRot1->Text = System::Convert::ToString(rot1);
		}
		else if (rot2 == 0)
		{
			rot2 = 4;
			labelRot2->Text = System::Convert::ToString(rot2);
		}
		else
		{
			rot3 = 4;
			labelRot3->Text = System::Convert::ToString(rot3);
		}

		if (rotCount == 3)
			DisableRotors();
	}
	else
	{
		if (rotCount == 3)
			EnableRotors();

		rotCount--;

		if (rot1 == 4)
		{
			rot1 = 0;
			labelRot1->Text = L"?";
		}
		else if (rot2 == 4)
		{
			rot2 = 0;
			labelRot2->Text = L"?";
		}
		else
		{
			rot3 = 0;
			labelRot3->Text = L"?";
		}

	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool temp = checkBox5->Checked;

	if (temp)
	{
		rotCount++;
		if (rot1 == 0)
		{
			rot1 = 5;
			labelRot1->Text = System::Convert::ToString(rot1);
		}
		else if (rot2 == 0)
		{
			rot2 = 5;
			labelRot2->Text = System::Convert::ToString(rot2);
		}
		else
		{
			rot3 = 5;
			labelRot3->Text = System::Convert::ToString(rot3);
		}

		if (rotCount == 3)
			DisableRotors();
	}
	else
	{
		if (rotCount == 3)
			EnableRotors();

		rotCount--;

		if (rot1 == 5)
		{
			rot1 = 0;
			labelRot1->Text = L"?";
		}
		else if (rot2 == 5)
		{
			rot2 = 0;
			labelRot2->Text = L"?";
		}
		else
		{
			rot3 = 0;
			labelRot3->Text = L"?";
		}

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ input = inputText->Text;
	std::string inp = msclr::interop::marshal_as<std::string>(input);
	std::string out = encrypter.Encrypt(inp);
	System::String^ output = gcnew String(out.c_str());

	outText->Text = output;
	
}
};
}
