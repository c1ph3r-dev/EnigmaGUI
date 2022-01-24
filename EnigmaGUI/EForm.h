#pragma once

#include <Enigma/Enigma.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace EnigmaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Enigma::Core base{};
	Enigma::Core encrypter{};
	bool checkBoxSec = false;
	bool bInFile = false;
	bool bOutFile = false;
	bool bApp = false;

	std::ifstream fileI;
	std::ofstream fileO;

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
	private: System::Windows::Forms::Button^ mainBtn;


	private: System::Windows::Forms::TextBox^ outText;
	private: System::Windows::Forms::Button^ offsetBtn;

	private: System::Windows::Forms::TextBox^ offsetBox;
	private: System::Windows::Forms::TextBox^ pair1B;
	private: System::Windows::Forms::TextBox^ pair2B;
	private: System::Windows::Forms::TextBox^ pair3B;
	private: System::Windows::Forms::TextBox^ pair4B;
	private: System::Windows::Forms::TextBox^ pair5B;
	private: System::Windows::Forms::TextBox^ pair6B;
	private: System::Windows::Forms::TextBox^ pair7B;
	private: System::Windows::Forms::TextBox^ pair8B;
	private: System::Windows::Forms::TextBox^ pair9B;
	private: System::Windows::Forms::TextBox^ pair10B;
	private: System::Windows::Forms::TextBox^ pair11B;
	private: System::Windows::Forms::TextBox^ pair12B;
	private: System::Windows::Forms::TextBox^ pair13B;













	private: System::Windows::Forms::TextBox^ pair13A;

	private: System::Windows::Forms::TextBox^ pair12A;

	private: System::Windows::Forms::TextBox^ pair11A;

	private: System::Windows::Forms::TextBox^ pair10A;

	private: System::Windows::Forms::TextBox^ pair9A;

	private: System::Windows::Forms::TextBox^ pair8A;

	private: System::Windows::Forms::TextBox^ pair7A;

	private: System::Windows::Forms::TextBox^ pair6A;

	private: System::Windows::Forms::TextBox^ pair5A;


	private: System::Windows::Forms::TextBox^ pair4A;

	private: System::Windows::Forms::TextBox^ pair3A;

	private: System::Windows::Forms::TextBox^ pair2A;

	private: System::Windows::Forms::TextBox^ pair1A;

	private: System::Windows::Forms::Label^ pairsLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ genPairsBtn;

private: System::Windows::Forms::Button^ defaultPairBtn;
private: System::Windows::Forms::CheckBox^ rotChck;
private: System::Windows::Forms::CheckBox^ pairChck;
private: System::Windows::Forms::Button^ resetOffBtn;
private: System::Windows::Forms::TextBox^ inPathBox;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ outPathBox;
private: System::Windows::Forms::CheckBox^ inFileCheck;
private: System::Windows::Forms::CheckBox^ outFileCheck;
private: System::Windows::Forms::CheckBox^ appCheck;









	private: System::Windows::Forms::Label^ labelRot3;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EForm::typeid));
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
			this->mainBtn = (gcnew System::Windows::Forms::Button());
			this->outText = (gcnew System::Windows::Forms::TextBox());
			this->offsetBtn = (gcnew System::Windows::Forms::Button());
			this->offsetBox = (gcnew System::Windows::Forms::TextBox());
			this->pair1B = (gcnew System::Windows::Forms::TextBox());
			this->pair2B = (gcnew System::Windows::Forms::TextBox());
			this->pair3B = (gcnew System::Windows::Forms::TextBox());
			this->pair4B = (gcnew System::Windows::Forms::TextBox());
			this->pair5B = (gcnew System::Windows::Forms::TextBox());
			this->pair6B = (gcnew System::Windows::Forms::TextBox());
			this->pair7B = (gcnew System::Windows::Forms::TextBox());
			this->pair8B = (gcnew System::Windows::Forms::TextBox());
			this->pair9B = (gcnew System::Windows::Forms::TextBox());
			this->pair10B = (gcnew System::Windows::Forms::TextBox());
			this->pair11B = (gcnew System::Windows::Forms::TextBox());
			this->pair12B = (gcnew System::Windows::Forms::TextBox());
			this->pair13B = (gcnew System::Windows::Forms::TextBox());
			this->pair13A = (gcnew System::Windows::Forms::TextBox());
			this->pair12A = (gcnew System::Windows::Forms::TextBox());
			this->pair11A = (gcnew System::Windows::Forms::TextBox());
			this->pair10A = (gcnew System::Windows::Forms::TextBox());
			this->pair9A = (gcnew System::Windows::Forms::TextBox());
			this->pair8A = (gcnew System::Windows::Forms::TextBox());
			this->pair7A = (gcnew System::Windows::Forms::TextBox());
			this->pair6A = (gcnew System::Windows::Forms::TextBox());
			this->pair5A = (gcnew System::Windows::Forms::TextBox());
			this->pair4A = (gcnew System::Windows::Forms::TextBox());
			this->pair3A = (gcnew System::Windows::Forms::TextBox());
			this->pair2A = (gcnew System::Windows::Forms::TextBox());
			this->pair1A = (gcnew System::Windows::Forms::TextBox());
			this->pairsLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->genPairsBtn = (gcnew System::Windows::Forms::Button());
			this->defaultPairBtn = (gcnew System::Windows::Forms::Button());
			this->rotChck = (gcnew System::Windows::Forms::CheckBox());
			this->pairChck = (gcnew System::Windows::Forms::CheckBox());
			this->resetOffBtn = (gcnew System::Windows::Forms::Button());
			this->inPathBox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->outPathBox = (gcnew System::Windows::Forms::TextBox());
			this->inFileCheck = (gcnew System::Windows::Forms::CheckBox());
			this->outFileCheck = (gcnew System::Windows::Forms::CheckBox());
			this->appCheck = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1050, 30);
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
			this->checkBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(1050, 75);
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
			this->checkBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(1050, 120);
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
			this->checkBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(1050, 165);
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
			this->checkBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(1050, 210);
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
			this->labelRot->BackColor = System::Drawing::SystemColors::Desktop;
			this->labelRot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRot->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->labelRot->Location = System::Drawing::Point(1050, 255);
			this->labelRot->Name = L"labelRot";
			this->labelRot->Size = System::Drawing::Size(68, 20);
			this->labelRot->TabIndex = 5;
			this->labelRot->Text = L"Rotors:";
			// 
			// labelRot1
			// 
			this->labelRot1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelRot1->AutoSize = true;
			this->labelRot1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelRot1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->labelRot1->Location = System::Drawing::Point(1115, 255);
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
			this->labelRot2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->labelRot2->Location = System::Drawing::Point(1130, 255);
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
			this->labelRot3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->labelRot3->Location = System::Drawing::Point(1145, 255);
			this->labelRot3->Name = L"labelRot3";
			this->labelRot3->Size = System::Drawing::Size(19, 20);
			this->labelRot3->TabIndex = 8;
			this->labelRot3->Text = L"\?";
			// 
			// inputText
			// 
			this->inputText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputText->BackColor = System::Drawing::SystemColors::Window;
			this->inputText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputText->Location = System::Drawing::Point(13, 13);
			this->inputText->Name = L"inputText";
			this->inputText->Size = System::Drawing::Size(1000, 29);
			this->inputText->TabIndex = 9;
			// 
			// mainBtn
			// 
			this->mainBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->mainBtn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->mainBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainBtn->Location = System::Drawing::Point(432, 48);
			this->mainBtn->Name = L"mainBtn";
			this->mainBtn->Size = System::Drawing::Size(203, 23);
			this->mainBtn->TabIndex = 11;
			this->mainBtn->Text = L"Encrypt/Decrypt";
			this->mainBtn->UseVisualStyleBackColor = false;
			this->mainBtn->Click += gcnew System::EventHandler(this, &EForm::button1_Click);
			// 
			// outText
			// 
			this->outText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->outText->BackColor = System::Drawing::SystemColors::Window;
			this->outText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outText->Location = System::Drawing::Point(12, 77);
			this->outText->Name = L"outText";
			this->outText->Size = System::Drawing::Size(1000, 29);
			this->outText->TabIndex = 13;
			// 
			// offsetBtn
			// 
			this->offsetBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->offsetBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offsetBtn->Location = System::Drawing::Point(1050, 355);
			this->offsetBtn->MaximumSize = System::Drawing::Size(120, 40);
			this->offsetBtn->Name = L"offsetBtn";
			this->offsetBtn->Size = System::Drawing::Size(120, 40);
			this->offsetBtn->TabIndex = 14;
			this->offsetBtn->Text = L"Offset Rotors";
			this->offsetBtn->UseVisualStyleBackColor = true;
			this->offsetBtn->Click += gcnew System::EventHandler(this, &EForm::button2_Click);
			// 
			// offsetBox
			// 
			this->offsetBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->offsetBox->BackColor = System::Drawing::SystemColors::Window;
			this->offsetBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offsetBox->Location = System::Drawing::Point(1050, 310);
			this->offsetBox->Name = L"offsetBox";
			this->offsetBox->Size = System::Drawing::Size(120, 38);
			this->offsetBox->TabIndex = 15;
			// 
			// pair1B
			// 
			this->pair1B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair1B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair1B->Location = System::Drawing::Point(13, 586);
			this->pair1B->Name = L"pair1B";
			this->pair1B->Size = System::Drawing::Size(30, 38);
			this->pair1B->TabIndex = 16;
			this->pair1B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair2B
			// 
			this->pair2B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair2B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair2B->Location = System::Drawing::Point(49, 586);
			this->pair2B->Name = L"pair2B";
			this->pair2B->Size = System::Drawing::Size(30, 38);
			this->pair2B->TabIndex = 17;
			this->pair2B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair3B
			// 
			this->pair3B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair3B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair3B->Location = System::Drawing::Point(85, 586);
			this->pair3B->Name = L"pair3B";
			this->pair3B->Size = System::Drawing::Size(30, 38);
			this->pair3B->TabIndex = 18;
			this->pair3B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair4B
			// 
			this->pair4B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair4B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair4B->Location = System::Drawing::Point(121, 586);
			this->pair4B->Name = L"pair4B";
			this->pair4B->Size = System::Drawing::Size(30, 38);
			this->pair4B->TabIndex = 19;
			this->pair4B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair5B
			// 
			this->pair5B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair5B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair5B->Location = System::Drawing::Point(157, 586);
			this->pair5B->Name = L"pair5B";
			this->pair5B->Size = System::Drawing::Size(30, 38);
			this->pair5B->TabIndex = 20;
			this->pair5B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair6B
			// 
			this->pair6B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair6B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair6B->Location = System::Drawing::Point(193, 586);
			this->pair6B->Name = L"pair6B";
			this->pair6B->Size = System::Drawing::Size(30, 38);
			this->pair6B->TabIndex = 21;
			this->pair6B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair7B
			// 
			this->pair7B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair7B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair7B->Location = System::Drawing::Point(229, 586);
			this->pair7B->Name = L"pair7B";
			this->pair7B->Size = System::Drawing::Size(30, 38);
			this->pair7B->TabIndex = 22;
			this->pair7B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair8B
			// 
			this->pair8B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair8B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair8B->Location = System::Drawing::Point(265, 586);
			this->pair8B->Name = L"pair8B";
			this->pair8B->Size = System::Drawing::Size(30, 38);
			this->pair8B->TabIndex = 23;
			this->pair8B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair9B
			// 
			this->pair9B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair9B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair9B->Location = System::Drawing::Point(301, 586);
			this->pair9B->Name = L"pair9B";
			this->pair9B->Size = System::Drawing::Size(30, 38);
			this->pair9B->TabIndex = 24;
			this->pair9B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair10B
			// 
			this->pair10B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair10B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair10B->Location = System::Drawing::Point(337, 586);
			this->pair10B->Name = L"pair10B";
			this->pair10B->Size = System::Drawing::Size(30, 38);
			this->pair10B->TabIndex = 25;
			this->pair10B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair11B
			// 
			this->pair11B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair11B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair11B->Location = System::Drawing::Point(373, 586);
			this->pair11B->Name = L"pair11B";
			this->pair11B->Size = System::Drawing::Size(30, 38);
			this->pair11B->TabIndex = 26;
			this->pair11B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair12B
			// 
			this->pair12B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair12B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair12B->Location = System::Drawing::Point(409, 586);
			this->pair12B->Name = L"pair12B";
			this->pair12B->Size = System::Drawing::Size(30, 38);
			this->pair12B->TabIndex = 27;
			this->pair12B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair13B
			// 
			this->pair13B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair13B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair13B->Location = System::Drawing::Point(445, 586);
			this->pair13B->Name = L"pair13B";
			this->pair13B->Size = System::Drawing::Size(30, 38);
			this->pair13B->TabIndex = 28;
			this->pair13B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair13A
			// 
			this->pair13A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair13A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair13A->Location = System::Drawing::Point(445, 542);
			this->pair13A->Name = L"pair13A";
			this->pair13A->Size = System::Drawing::Size(30, 38);
			this->pair13A->TabIndex = 41;
			this->pair13A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair12A
			// 
			this->pair12A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair12A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair12A->Location = System::Drawing::Point(409, 542);
			this->pair12A->Name = L"pair12A";
			this->pair12A->Size = System::Drawing::Size(30, 38);
			this->pair12A->TabIndex = 40;
			this->pair12A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair11A
			// 
			this->pair11A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair11A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair11A->Location = System::Drawing::Point(373, 542);
			this->pair11A->Name = L"pair11A";
			this->pair11A->Size = System::Drawing::Size(30, 38);
			this->pair11A->TabIndex = 39;
			this->pair11A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair10A
			// 
			this->pair10A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair10A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair10A->Location = System::Drawing::Point(337, 542);
			this->pair10A->Name = L"pair10A";
			this->pair10A->Size = System::Drawing::Size(30, 38);
			this->pair10A->TabIndex = 38;
			this->pair10A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair9A
			// 
			this->pair9A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair9A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair9A->Location = System::Drawing::Point(301, 542);
			this->pair9A->Name = L"pair9A";
			this->pair9A->Size = System::Drawing::Size(30, 38);
			this->pair9A->TabIndex = 37;
			this->pair9A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair8A
			// 
			this->pair8A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair8A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair8A->Location = System::Drawing::Point(265, 542);
			this->pair8A->Name = L"pair8A";
			this->pair8A->Size = System::Drawing::Size(30, 38);
			this->pair8A->TabIndex = 36;
			this->pair8A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair7A
			// 
			this->pair7A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair7A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair7A->Location = System::Drawing::Point(229, 542);
			this->pair7A->Name = L"pair7A";
			this->pair7A->Size = System::Drawing::Size(30, 38);
			this->pair7A->TabIndex = 35;
			this->pair7A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair6A
			// 
			this->pair6A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair6A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair6A->Location = System::Drawing::Point(193, 542);
			this->pair6A->Name = L"pair6A";
			this->pair6A->Size = System::Drawing::Size(30, 38);
			this->pair6A->TabIndex = 34;
			this->pair6A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair5A
			// 
			this->pair5A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair5A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair5A->Location = System::Drawing::Point(157, 542);
			this->pair5A->Name = L"pair5A";
			this->pair5A->Size = System::Drawing::Size(30, 38);
			this->pair5A->TabIndex = 33;
			this->pair5A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair4A
			// 
			this->pair4A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair4A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair4A->Location = System::Drawing::Point(121, 542);
			this->pair4A->Name = L"pair4A";
			this->pair4A->Size = System::Drawing::Size(30, 38);
			this->pair4A->TabIndex = 32;
			this->pair4A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair3A
			// 
			this->pair3A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair3A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair3A->Location = System::Drawing::Point(85, 542);
			this->pair3A->Name = L"pair3A";
			this->pair3A->Size = System::Drawing::Size(30, 38);
			this->pair3A->TabIndex = 31;
			this->pair3A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair2A
			// 
			this->pair2A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair2A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair2A->Location = System::Drawing::Point(49, 542);
			this->pair2A->Name = L"pair2A";
			this->pair2A->Size = System::Drawing::Size(30, 38);
			this->pair2A->TabIndex = 30;
			this->pair2A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pair1A
			// 
			this->pair1A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pair1A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pair1A->Location = System::Drawing::Point(13, 542);
			this->pair1A->Name = L"pair1A";
			this->pair1A->Size = System::Drawing::Size(30, 38);
			this->pair1A->TabIndex = 29;
			this->pair1A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pairsLabel
			// 
			this->pairsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pairsLabel->AutoSize = true;
			this->pairsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pairsLabel->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pairsLabel->Location = System::Drawing::Point(193, 444);
			this->pairsLabel->Name = L"pairsLabel";
			this->pairsLabel->Size = System::Drawing::Size(102, 39);
			this->pairsLabel->TabIndex = 42;
			this->pairsLabel->Text = L"Pairs";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(13, 498);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 31);
			this->label1->TabIndex = 43;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(49, 498);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 31);
			this->label2->TabIndex = 44;
			this->label2->Text = L"2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(85, 498);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 31);
			this->label3->TabIndex = 45;
			this->label3->Text = L"3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(121, 498);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 31);
			this->label4->TabIndex = 46;
			this->label4->Text = L"4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Location = System::Drawing::Point(157, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 31);
			this->label5->TabIndex = 47;
			this->label5->Text = L"5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Location = System::Drawing::Point(193, 498);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 31);
			this->label6->TabIndex = 48;
			this->label6->Text = L"6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label7->Location = System::Drawing::Point(229, 498);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 31);
			this->label7->TabIndex = 49;
			this->label7->Text = L"7";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label8->Location = System::Drawing::Point(265, 498);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 31);
			this->label8->TabIndex = 50;
			this->label8->Text = L"8";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Location = System::Drawing::Point(301, 498);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 31);
			this->label9->TabIndex = 51;
			this->label9->Text = L"9";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Location = System::Drawing::Point(328, 498);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 31);
			this->label10->TabIndex = 52;
			this->label10->Text = L"10";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label11->Location = System::Drawing::Point(366, 498);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 31);
			this->label11->TabIndex = 53;
			this->label11->Text = L"11";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Location = System::Drawing::Point(400, 498);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 31);
			this->label12->TabIndex = 54;
			this->label12->Text = L"12";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Location = System::Drawing::Point(437, 498);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 31);
			this->label13->TabIndex = 55;
			this->label13->Text = L"13";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// genPairsBtn
			// 
			this->genPairsBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->genPairsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genPairsBtn->Location = System::Drawing::Point(505, 542);
			this->genPairsBtn->Name = L"genPairsBtn";
			this->genPairsBtn->Size = System::Drawing::Size(100, 38);
			this->genPairsBtn->TabIndex = 56;
			this->genPairsBtn->Text = L"Gen Pairs";
			this->genPairsBtn->UseVisualStyleBackColor = true;
			this->genPairsBtn->Click += gcnew System::EventHandler(this, &EForm::genPairsBtn_Click);
			// 
			// defaultPairBtn
			// 
			this->defaultPairBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->defaultPairBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->defaultPairBtn->Location = System::Drawing::Point(505, 586);
			this->defaultPairBtn->Name = L"defaultPairBtn";
			this->defaultPairBtn->Size = System::Drawing::Size(100, 38);
			this->defaultPairBtn->TabIndex = 57;
			this->defaultPairBtn->Text = L"Use Default Pairs";
			this->defaultPairBtn->UseVisualStyleBackColor = true;
			this->defaultPairBtn->Click += gcnew System::EventHandler(this, &EForm::button2_Click_1);
			// 
			// rotChck
			// 
			this->rotChck->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rotChck->AutoSize = true;
			this->rotChck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rotChck->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->rotChck->Location = System::Drawing::Point(1050, 453);
			this->rotChck->Name = L"rotChck";
			this->rotChck->Size = System::Drawing::Size(120, 35);
			this->rotChck->TabIndex = 58;
			this->rotChck->Text = L"Rotors";
			this->rotChck->UseVisualStyleBackColor = true;
			this->rotChck->CheckedChanged += gcnew System::EventHandler(this, &EForm::rotChck_CheckedChanged);
			// 
			// pairChck
			// 
			this->pairChck->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pairChck->AutoSize = true;
			this->pairChck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pairChck->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pairChck->Location = System::Drawing::Point(1050, 494);
			this->pairChck->Name = L"pairChck";
			this->pairChck->Size = System::Drawing::Size(100, 35);
			this->pairChck->TabIndex = 59;
			this->pairChck->Text = L"Pairs";
			this->pairChck->UseVisualStyleBackColor = true;
			this->pairChck->CheckedChanged += gcnew System::EventHandler(this, &EForm::pairChck_CheckedChanged);
			// 
			// resetOffBtn
			// 
			this->resetOffBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->resetOffBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetOffBtn->Location = System::Drawing::Point(1050, 401);
			this->resetOffBtn->MaximumSize = System::Drawing::Size(120, 40);
			this->resetOffBtn->Name = L"resetOffBtn";
			this->resetOffBtn->Size = System::Drawing::Size(120, 40);
			this->resetOffBtn->TabIndex = 60;
			this->resetOffBtn->Text = L"Reset Offset";
			this->resetOffBtn->UseVisualStyleBackColor = true;
			this->resetOffBtn->Click += gcnew System::EventHandler(this, &EForm::resetOffBtn_Click);
			// 
			// inPathBox
			// 
			this->inPathBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inPathBox->BackColor = System::Drawing::SystemColors::Window;
			this->inPathBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inPathBox->Location = System::Drawing::Point(13, 152);
			this->inPathBox->Name = L"inPathBox";
			this->inPathBox->Size = System::Drawing::Size(1000, 29);
			this->inPathBox->TabIndex = 61;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label14->Location = System::Drawing::Point(426, 116);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(217, 33);
			this->label14->TabIndex = 62;
			this->label14->Text = L"Input File Path";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label15->Location = System::Drawing::Point(412, 184);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(241, 33);
			this->label15->TabIndex = 64;
			this->label15->Text = L"Output File Path";
			// 
			// outPathBox
			// 
			this->outPathBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->outPathBox->BackColor = System::Drawing::SystemColors::Window;
			this->outPathBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outPathBox->Location = System::Drawing::Point(13, 220);
			this->outPathBox->Name = L"outPathBox";
			this->outPathBox->Size = System::Drawing::Size(1000, 29);
			this->outPathBox->TabIndex = 63;
			// 
			// inFileCheck
			// 
			this->inFileCheck->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->inFileCheck->AutoSize = true;
			this->inFileCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inFileCheck->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->inFileCheck->Location = System::Drawing::Point(271, 255);
			this->inFileCheck->Name = L"inFileCheck";
			this->inFileCheck->Size = System::Drawing::Size(254, 35);
			this->inFileCheck->TabIndex = 65;
			this->inFileCheck->Text = L"Use File as Input";
			this->inFileCheck->UseVisualStyleBackColor = true;
			this->inFileCheck->CheckedChanged += gcnew System::EventHandler(this, &EForm::inFileCheck_CheckedChanged);
			// 
			// outFileCheck
			// 
			this->outFileCheck->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->outFileCheck->AutoSize = true;
			this->outFileCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outFileCheck->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->outFileCheck->Location = System::Drawing::Point(570, 255);
			this->outFileCheck->Name = L"outFileCheck";
			this->outFileCheck->Size = System::Drawing::Size(276, 35);
			this->outFileCheck->TabIndex = 66;
			this->outFileCheck->Text = L"Use File as Output";
			this->outFileCheck->UseVisualStyleBackColor = true;
			this->outFileCheck->CheckedChanged += gcnew System::EventHandler(this, &EForm::outFileCheck_CheckedChanged);
			// 
			// appCheck
			// 
			this->appCheck->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->appCheck->AutoSize = true;
			this->appCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->appCheck->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->appCheck->Location = System::Drawing::Point(570, 296);
			this->appCheck->Name = L"appCheck";
			this->appCheck->Size = System::Drawing::Size(211, 35);
			this->appCheck->TabIndex = 67;
			this->appCheck->Text = L"Append Mode";
			this->appCheck->UseVisualStyleBackColor = true;
			this->appCheck->CheckedChanged += gcnew System::EventHandler(this, &EForm::appCheck_CheckedChanged);
			// 
			// EForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(1228, 636);
			this->Controls->Add(this->appCheck);
			this->Controls->Add(this->outFileCheck);
			this->Controls->Add(this->inFileCheck);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->outPathBox);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->inPathBox);
			this->Controls->Add(this->resetOffBtn);
			this->Controls->Add(this->pairChck);
			this->Controls->Add(this->rotChck);
			this->Controls->Add(this->defaultPairBtn);
			this->Controls->Add(this->genPairsBtn);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pairsLabel);
			this->Controls->Add(this->pair13A);
			this->Controls->Add(this->pair12A);
			this->Controls->Add(this->pair11A);
			this->Controls->Add(this->pair10A);
			this->Controls->Add(this->pair9A);
			this->Controls->Add(this->pair8A);
			this->Controls->Add(this->pair7A);
			this->Controls->Add(this->pair6A);
			this->Controls->Add(this->pair5A);
			this->Controls->Add(this->pair4A);
			this->Controls->Add(this->pair3A);
			this->Controls->Add(this->pair2A);
			this->Controls->Add(this->pair1A);
			this->Controls->Add(this->pair13B);
			this->Controls->Add(this->pair12B);
			this->Controls->Add(this->pair11B);
			this->Controls->Add(this->pair10B);
			this->Controls->Add(this->pair9B);
			this->Controls->Add(this->pair8B);
			this->Controls->Add(this->pair7B);
			this->Controls->Add(this->pair6B);
			this->Controls->Add(this->pair5B);
			this->Controls->Add(this->pair4B);
			this->Controls->Add(this->pair3B);
			this->Controls->Add(this->pair2B);
			this->Controls->Add(this->pair1B);
			this->Controls->Add(this->offsetBox);
			this->Controls->Add(this->offsetBtn);
			this->Controls->Add(this->outText);
			this->Controls->Add(this->mainBtn);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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

		try
		{
			encrypter.GenNewRotorsModules(rot1, rot2, rot3);
		}
		catch (std::logic_error err)
		{
			MessageBox::Show(gcnew String(err.what()), L"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		inputText->Enabled = true;
		offsetBox->Enabled = true;
		offsetBtn->Enabled = true;
		mainBtn->Enabled = true;

		checkBoxSec = true;
		rotChck->Checked = true;

		if (pairChck->Checked)
		{
			base = encrypter;
			resetOffBtn->Enabled = true;
		}
	}
	private: void EnableRotors()
	{
		inputText->Enabled = false;
		offsetBox->Enabled = false;
		offsetBtn->Enabled = false;
		mainBtn->Enabled = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;

		checkBoxSec = true;
		rotChck->Checked = false;
		resetOffBtn->Enabled = false;
	}

	private: System::Void EForm_Load(System::Object^ sender, System::EventArgs^ e) {
		encrypter.SetRotorDataPath("RotorModules");

		outText->ReadOnly = true;
		inputText->Enabled = false;
		offsetBox->Enabled = false;
		offsetBtn->Enabled = false;
		mainBtn->Enabled = false;

		resetOffBtn->Enabled = false;
		inFileCheck->Checked = false;
		outFileCheck->Checked = false;
		appCheck->Checked = false;
		appCheck->Enabled = false;
		appCheck->Visible = false;
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

	if (bInFile)
	{
		std::string inPathStr = msclr::interop::marshal_as<std::string>(inPathBox->Text);
		fileI.open(inPathStr, std::ios_base::in);
		std::string inp;
		fileI >> inp;

		std::string out;

		try
		{
			out = encrypter.Encrypt(inp);
		}
		catch (std::logic_error err)
		{
			MessageBox::Show(gcnew String(err.what()), L"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		if (bOutFile)
		{
			std::string outPathStr = msclr::interop::marshal_as<std::string>(outPathBox->Text);
			if (!bApp)
			{
				fileO.open(outPathStr, std::ios_base::out);
			}
			else
			{
				fileO.open(outPathStr, std::ios_base::app);
			}
			fileO << out;
			fileO << " ";
			fileO.close();

			MessageBox::Show(L"Text succesfully written to file", L"Enigma", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		else
		{
			System::String^ output = gcnew String(out.c_str());
			outText->Text = output;
		}
		fileI.close();
	}
	else if (bOutFile)
	{
		System::String^ input = inputText->Text;
		std::string inp = msclr::interop::marshal_as<std::string>(input);
		std::string out;

		try
		{
			out = encrypter.Encrypt(inp);
		}
		catch (std::logic_error err)
		{
			MessageBox::Show(gcnew String(err.what()), L"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		std::string outPathStr = msclr::interop::marshal_as<std::string>(outPathBox->Text);
		if (!bApp)
		{
			fileO.open(outPathStr, std::ios_base::out);
		}
		else
		{
			fileO.open(outPathStr, std::ios_base::app);
		}
		fileO << out;
		fileO << " ";
		fileO.close();

		MessageBox::Show(L"Text succesfully written to file", L"Enigma", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	else
	{
		System::String^ input = inputText->Text;
		std::string inp = msclr::interop::marshal_as<std::string>(input);
		std::string out;

		try
		{
			out = encrypter.Encrypt(inp);
		}
		catch (std::logic_error err)
		{
			MessageBox::Show(gcnew String(err.what()), L"ERROR!", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		}


		System::String^ output = gcnew String(out.c_str());

		outText->Text = output;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	encrypter.OffsetRotor(System::Convert::ToInt64(offsetBox->Text));
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	encrypter.GenNewPairModule();
	checkBoxSec = true;
	pairChck->Checked = true;

	if (rotChck->Checked)
	{
		base = encrypter;
		resetOffBtn->Enabled = true;
	}
}
private: System::Void genPairsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Enigma::s_Pairs* pairs = new Enigma::s_Pairs[13];

	pairs[0].pair1 = System::Convert::ToChar(pair1A->Text);
	pairs[0].pair2 = System::Convert::ToChar(pair1B->Text);

	pairs[1].pair1 = System::Convert::ToChar(pair2A->Text);
	pairs[1].pair2 = System::Convert::ToChar(pair2B->Text);

	pairs[2].pair1 = System::Convert::ToChar(pair3A->Text);
	pairs[2].pair2 = System::Convert::ToChar(pair3B->Text);

	pairs[3].pair1 = System::Convert::ToChar(pair4A->Text);
	pairs[3].pair2 = System::Convert::ToChar(pair4B->Text);

	pairs[4].pair1 = System::Convert::ToChar(pair5A->Text);
	pairs[4].pair2 = System::Convert::ToChar(pair5B->Text);

	pairs[5].pair1 = System::Convert::ToChar(pair6A->Text);
	pairs[5].pair2 = System::Convert::ToChar(pair6B->Text);

	pairs[6].pair1 = System::Convert::ToChar(pair7A->Text);
	pairs[6].pair2 = System::Convert::ToChar(pair7B->Text);

	pairs[7].pair1 = System::Convert::ToChar(pair8A->Text);
	pairs[7].pair2 = System::Convert::ToChar(pair8B->Text);

	pairs[8].pair1 = System::Convert::ToChar(pair9A->Text);
	pairs[8].pair2 = System::Convert::ToChar(pair9B->Text);

	pairs[9].pair1 = System::Convert::ToChar(pair10A->Text);
	pairs[9].pair2 = System::Convert::ToChar(pair10B->Text);

	pairs[10].pair1 = System::Convert::ToChar(pair11A->Text);
	pairs[10].pair2 = System::Convert::ToChar(pair11B->Text);

	pairs[11].pair1 = System::Convert::ToChar(pair12A->Text);
	pairs[11].pair2 = System::Convert::ToChar(pair12B->Text);

	pairs[12].pair1 = System::Convert::ToChar(pair13A->Text);
	pairs[12].pair2 = System::Convert::ToChar(pair13B->Text);

	try
	{
		encrypter.GenNewPairModule(pairs);
	}
	catch(std::logic_error err)
	{
		MessageBox::Show(gcnew String(err.what()), L"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	checkBoxSec = true;
	pairChck->Checked = true;

	if (rotChck->Checked)
	{
		base = encrypter;
		resetOffBtn->Enabled = true;
	}

	delete[] pairs;
}
private: System::Void rotChck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (!checkBoxSec)
	{
		rotChck->Checked = !(rotChck->Checked);
	}
	else
	{
		checkBoxSec = false;
	}
}
private: System::Void pairChck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxSec)
	{
		pairChck->Checked = !(pairChck->Checked);
	}
	else
	{
		checkBoxSec = false;
	}
}
private: System::Void resetOffBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	encrypter = base;
}
private: System::Void outFileCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bOutFile = outFileCheck->Checked;
	appCheck->Enabled = outFileCheck->Checked;
	appCheck->Visible = outFileCheck->Checked;
}
private: System::Void inFileCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bInFile = inFileCheck->Checked;
}
private: System::Void appCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bApp = appCheck->Checked;
}
};
}
