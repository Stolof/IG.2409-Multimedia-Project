#pragma once
#include "resize.h"
#include "convert_string.cpp"
//#include "msclr\marshal_cppstd.h
//#include <msclr\marshal_atl.h>
//#include <string>


namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de form_v2
	/// </summary>
	public ref class form_v2 : public System::Windows::Forms::Form
	{
	public:
		form_v2(void)
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
		~form_v2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Source";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Destination";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ScaleX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ScaleY";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(110, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Resize";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_v2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form_v2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(124, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Result";
			// 
			// form_v2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 366);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"form_v2";
			this->Text = L"form_v2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ srcName_net = textBox1->Text;
		System::String^ dstName_net = textBox2->Text;
		System::String^ scaleX_str = textBox3->Text;
		System::String^ scaleY_str = textBox4->Text;

		double scaleX = System::Convert::ToDouble(scaleX_str);
		double scaleY = System::Convert::ToDouble(scaleY_str);

		string srcName, dstName;

		//msclr::interop::marshal_context context;
		//std::string srcName = context.marshal_as<std::string>(srcName_net);
		//std::string dstName = context.marshal_as<std::string>(dstName_net);



		//int res = resize(srcName, dstName, scaleX, scaleY);

		/*if (res == 1) {
			label5->Text = srcName_net;
		}
		else {
			label5->Text = dstName_net;
		}*/
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
