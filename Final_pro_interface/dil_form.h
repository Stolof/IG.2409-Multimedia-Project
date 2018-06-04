#pragma once
#include "dil.h"

namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de dil_form
	/// </summary>
	public ref class dil_form : public System::Windows::Forms::Form
	{
	public:
		dil_form(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~dil_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox2;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labelerror;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelerror = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Destination :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Source :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &dil_form::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(373, 22);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Choose the number of iterartions between 1-10 :";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(212, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 54);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Modify a Video";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dil_form::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 54);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Modify a Picture";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &dil_form::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(178, 146);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(109, 26);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Dilatation";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &dil_form::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(178, 176);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(92, 26);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Erosion";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &dil_form::radioButton2_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-2, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 22);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Dilatation or Erosion :";
			// 
			// labelerror
			// 
			this->labelerror->AutoSize = true;
			this->labelerror->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelerror->ForeColor = System::Drawing::Color::Red;
			this->labelerror->Location = System::Drawing::Point(21, 224);
			this->labelerror->Name = L"labelerror";
			this->labelerror->Size = System::Drawing::Size(14, 22);
			this->labelerror->TabIndex = 25;
			this->labelerror->Text = L" ";
			// 
			// dil_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 323);
			this->Controls->Add(this->labelerror);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"dil_form";
			this->Text = L"dil_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ source_str = textBox1->Text;
	System::String ^ destination_str = textBox2->Text;
	System::String ^ sizeParam = textBox3->Text;
	int choiseParam;

	if (radioButton1->Checked == true) {
		choiseParam = 0;
	}
	if (radioButton2->Checked == true) {
		choiseParam = 1;
	}

	double sizeParam_dbl = System::Convert::ToDouble(sizeParam);
	int img_vid = 0;

	string source_tst = "sample.jpg";
	string dest_tst = "sample_dil.jpg";

	dil(source_tst, dest_tst,  choiseParam,  sizeParam_dbl,  img_vid);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ source_str = textBox1->Text;
	System::String ^ destination_str = textBox2->Text;
	System::String ^ sizeParam = textBox3->Text;
	int choiseParam;

	if (radioButton1->Checked == true) {
		choiseParam = 0;
	}
	if (radioButton2->Checked == true) {
		choiseParam = 1;
	}

	double sizeParam_dbl = System::Convert::ToDouble(sizeParam);
	int img_vid = 1;

	string source_tst = "chaplin.mp4";
	string dest_tst = "chaplin_dil.avi";

	dil(source_tst, dest_tst, choiseParam, sizeParam_dbl, img_vid);
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ sizeParam_str = textBox3->Text;
	
	if (sizeParam_str->Length !=0) {
		double sizeParam = System::Convert::ToDouble(sizeParam_str);
		if (sizeParam < 1 || sizeParam > 10) {

			labelerror->Text = "The number of iterations has to be between 1 and 10";
		}
		else {
			labelerror->Text = " ";
		}
		
	}
	

}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
