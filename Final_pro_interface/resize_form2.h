#pragma once
#include "resize.h"

namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de resize_form2
	/// </summary>
	public ref class resize_form2 : public System::Windows::Forms::Form
	{
	public:
		resize_form2(void)
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
		~resize_form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  labelerror;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->labelerror = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Modify a Picture";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resize_form2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(282, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modify a Video";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &resize_form2::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Source :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Destination :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &resize_form2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(440, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Choose a scaling factor for the X axis between 0.1 and 3 :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &resize_form2::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(440, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Choose a scaling factor for the Y axis between 0.1 and 3 :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 186);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &resize_form2::textBox4_TextChanged);
			// 
			// labelerror
			// 
			this->labelerror->AutoSize = true;
			this->labelerror->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelerror->ForeColor = System::Drawing::Color::Red;
			this->labelerror->Location = System::Drawing::Point(12, 230);
			this->labelerror->Name = L"labelerror";
			this->labelerror->Size = System::Drawing::Size(14, 22);
			this->labelerror->TabIndex = 25;
			this->labelerror->Text = L" ";
			// 
			// resize_form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 330);
			this->Controls->Add(this->labelerror);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"resize_form2";
			this->Text = L"resize_form2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ source_str = textBox1->Text;
		System::String ^ destination_str = textBox2->Text;
		System::String ^ scaleX_str = textBox3->Text;
		System::String ^ scaleY_str = textBox4->Text;
/*
		char source = System::Convert::ToChar(source_str);
		char destination = System::Convert::ToChar(destination_str);*/

		double scaleX = System::Convert::ToDouble(scaleX_str);
		double scaleY = System::Convert::ToDouble(scaleY_str);
		int img_vid = 0;

		string source_tst = "sample.jpg";
		string dest_tst = "sample_resize.jpg";
		resize(source_tst, dest_tst, scaleX,  scaleY,  img_vid);

		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ source_str = textBox1->Text;
		System::String ^ destination_str = textBox2->Text;
		System::String ^ scaleX_str = textBox3->Text;
		System::String ^ scaleY_str = textBox4->Text;
		/*
		char source = System::Convert::ToChar(source_str);
		char destination = System::Convert::ToChar(destination_str);*/

		double scaleX = System::Convert::ToDouble(scaleX_str);
		double scaleY = System::Convert::ToDouble(scaleY_str);
		int img_vid = 1;

		string source_tst = "chaplin.mp4";
		string dest_tst = "chaplin_bright.avi";
		resize(source_tst, dest_tst, scaleX, scaleY, img_vid);

	
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ scaleX_str = textBox3->Text;
	if (scaleX_str->Length != 0) {
		double scaleX = System::Convert::ToDouble(scaleX_str);

		if (scaleX < 0.1 || scaleX >3) {

			labelerror->Text = "The scaling factor for the X axis has to be between 0.1 and 3";
		}
		else {
			labelerror->Text = " ";
		}

	}


}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ scaleY_str = textBox4->Text;
	if (scaleY_str->Length != 0) {
		double scaleY = System::Convert::ToDouble(scaleY_str);

		if (scaleY < 0.1 || scaleY >3) {

			labelerror->Text = "The scaling factor for the Y axis has to be between 0.1 and 3";
		}
		else {
			labelerror->Text = " ";
		}

	}
}
};
}
