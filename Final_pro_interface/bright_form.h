#pragma once
#include "bright.h"
//#include <msclr\marshal_cppstd.h>

namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de bright_form
	/// </summary>
	public ref class bright_form : public System::Windows::Forms::Form
	{
	public:
		bright_form(void)
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
		~bright_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelerror;

	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelerror = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(214, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 67);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Modify a Video";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &bright_form::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 67);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Modify a Picture";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &bright_form::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(183, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(183, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(79, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Destination :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Source :";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(110, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 23;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &bright_form::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(345, 22);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Choose a shift factor between -100 and 100 :";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(110, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &bright_form::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 22);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Choose a scale factor between 0.1 and 5 :";
			// 
			// labelerror
			// 
			this->labelerror->AutoSize = true;
			this->labelerror->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelerror->ForeColor = System::Drawing::Color::Red;
			this->labelerror->Location = System::Drawing::Point(12, 238);
			this->labelerror->Name = L"labelerror";
			this->labelerror->Size = System::Drawing::Size(14, 22);
			this->labelerror->TabIndex = 24;
			this->labelerror->Text = L" ";
			// 
			// bright_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(460, 351);
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
			this->Name = L"bright_form";
			this->Text = L"bright_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ source_str = textBox1->Text;
		System::String ^ destination_str = textBox2->Text;
		System::String ^ alpha_str = textBox3->Text;
		System::String ^ beta_str = textBox3->Text;

		double alpha = System::Convert::ToDouble(alpha_str);
		double beta = System::Convert::ToDouble(beta_str);

		int img_vid = 0;

		/*msclr::interop::marshal_context context;
		std::string source = context.marshal_as<std::string>(source_str);
		std::string dest = context.marshal_as<std::string>(source_str);*/


		string source = "sample.jpg";
		string dest = "sample_bright.jpg";

		modifyBrightness( source, dest,  alpha,  beta,  img_vid);



	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ source_str = textBox1->Text;
	System::String ^ destination_str = textBox2->Text;
	System::String ^ alpha_str = textBox3->Text;
	System::String ^ beta_str = textBox3->Text;

	double alpha = System::Convert::ToDouble(alpha_str);
	double beta = System::Convert::ToDouble(beta_str);

	int img_vid = 1;


	string source_tst = "chaplin.mp4";
	string dest_tst = "chaplin_bright.avi";

	modifyBrightness(source_tst, dest_tst, alpha, beta, img_vid);
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ alpha_str = textBox3->Text;
	if (alpha_str->Length != 0) {
		double alpha = System::Convert::ToDouble(alpha_str);
		if (alpha < 0.1 || alpha >5) {

			labelerror->Text = "The scale factor has to be between 0.1 and 5";
		}
		else {
			labelerror->Text = " ";
		}

	}


}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ beta_str = textBox4->Text;
	if (beta_str->Length != 0) {
		double beta = System::Convert::ToDouble(beta_str);
		
		if (beta < -100 || beta >100) {

			labelerror->Text = "Choose a shift factor between -100 and 100";
		}
		else {
			labelerror->Text = " ";
		}

	}

}
};
}
