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
	/// Description résumée de cannyE_form
	/// </summary>
	public ref class cannyE_form : public System::Windows::Forms::Form
	{
	public:
		cannyE_form(void)
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
		~cannyE_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox4;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;

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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(140, 179);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(344, 20);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Enter the max threshold between 150 and 450 :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(140, 116);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(329, 20);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Enter the low threshold between 50 and 150 :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(213, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 29;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(109, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Destination :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 20);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Source :";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 54);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Modify a Video";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cannyE_form::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 54);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Modify a Picture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cannyE_form::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(140, 236);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 35;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &cannyE_form::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(346, 20);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Enter the size of the kernel between 3, 5 and 7 :";
			this->label5->Click += gcnew System::EventHandler(this, &cannyE_form::label5_Click);
			// 
			// cannyE_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 338);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
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
			this->Name = L"cannyE_form";
			this->Text = L"cannyE_form";
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
	/*
	char source = System::Convert::ToChar(source_str);
	char destination = System::Convert::ToChar(destination_str);*/

	int thr1 = System::Convert::ToInt16(thr1_str);
	int thr2 = System::Convert::ToInt16(thr2_str);
	int ker = System::Convert::ToInt16(ker_str);
	int img_vid = 1;

	string source_tst = "test";
	string dest_tst = "test";
	cannyEdge(source_tst, dest_tst, thr1, thr2, ker, img_vid);


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
