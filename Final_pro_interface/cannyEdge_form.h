#pragma once
#include "cannyEdge.h"

namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de cannyEdge_form
	/// </summary>
	public ref class cannyEdge_form : public System::Windows::Forms::Form
	{
	public:
		cannyEdge_form(void)
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
		~cannyEdge_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelerror = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(229, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 54);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Modify a Video";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &cannyEdge_form::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(44, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 54);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Modify a Picture";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cannyEdge_form::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(153, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 19;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &cannyEdge_form::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(353, 22);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Enter the low threshold between 50 and 150 :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 22);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Destination :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Source :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(153, 184);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 23;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &cannyEdge_form::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(368, 22);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Enter the max threshold between 150 and 450 :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(153, 246);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 25;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &cannyEdge_form::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(369, 22);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Enter the size of the kernel between 3, 5 and 7 :";
			// 
			// labelerror
			// 
			this->labelerror->AutoSize = true;
			this->labelerror->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelerror->ForeColor = System::Drawing::Color::Red;
			this->labelerror->Location = System::Drawing::Point(12, 297);
			this->labelerror->Name = L"labelerror";
			this->labelerror->Size = System::Drawing::Size(14, 22);
			this->labelerror->TabIndex = 26;
			this->labelerror->Text = L" ";
			// 
			// cannyEdge_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 397);
			this->Controls->Add(this->labelerror);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cannyEdge_form";
			this->Text = L"cannyEdge_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ source_str = textBox1->Text;
		System::String ^ destination_str = textBox2->Text;
		System::String ^ thr1_str = textBox3->Text;
		System::String ^ thr2_str = textBox4->Text;
		System::String ^ ker_str = textBox5->Text;


		int thr1 = System::Convert::ToInt16(thr1_str);
		int thr2 = System::Convert::ToInt16(thr2_str);
		int ker = System::Convert::ToInt16(ker_str);


		int img_vid = 0;

		string source_tst = "sample.jpg";
		string dest_tst = "sample_canny.jpg";

		cannyEdge(source_tst, dest_tst, thr1, thr2,ker, img_vid);


	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ source_str = textBox1->Text;
	System::String ^ destination_str = textBox2->Text;
	System::String ^ thr1_str = textBox3->Text;
	System::String ^ thr2_str = textBox4->Text;
	System::String ^ ker_str = textBox5->Text;


	int thr1 = System::Convert::ToInt16(thr1_str);
	int thr2 = System::Convert::ToInt16(thr2_str);
	int ker = System::Convert::ToInt16(ker_str);


	int img_vid = 1;

	string source_tst = "chaplin.mp4";
	string dest_tst = "chaplin_cannyEdge.avi";

	cannyEdge(source_tst, dest_tst, thr1, thr2, ker, img_vid);


}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ thr1_str = textBox3->Text;
	if (thr1_str->Length != 0) {
		int thr1 = System::Convert::ToInt16(thr1_str);
		if (thr1 < 50 || thr1 >150) {

			labelerror->Text = "Please choose a threshold between 50 and 150";
		}
		else {
			labelerror->Text = " ";
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ thr2_str = textBox4->Text;
	if (thr2_str->Length != 0) {
		int thr2 = System::Convert::ToInt16(thr2_str);
		if (thr2 < 150 || thr2 >450) {

			labelerror->Text = "Please choose a threshold between 150 and 450";
		}
		else {
			labelerror->Text = " ";
		}
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ ker_str = textBox4->Text;
	if (ker_str->Length != 0) {
		int ker = System::Convert::ToInt16(ker_str);
		if (ker != 3 && ker != 5 && ker != 7) {
			labelerror->Text = "Please choose a size between 3, 5 and 7";
		}
		else {
			labelerror->Text = " ";
		}
	}
}
};
}
