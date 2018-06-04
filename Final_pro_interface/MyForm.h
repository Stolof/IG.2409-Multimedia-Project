#pragma once
#include "dil_form.h"
#include "resize_form2.h"
#include "bright_form.h"
#include "face_form.h"
#include "cannyEdge_form.h"
#include "panorama_form.h"


namespace finalprointerfacev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  dil_button;
	private: System::Windows::Forms::Button^  resize_button;
	private: System::Windows::Forms::Button^  bright_button;
	private: System::Windows::Forms::Button^  pano_button;
	private: System::Windows::Forms::Button^  canEd_button;
	private: System::Windows::Forms::Button^  face_button;
	private: System::Windows::Forms::Label^  label1;
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
			this->dil_button = (gcnew System::Windows::Forms::Button());
			this->resize_button = (gcnew System::Windows::Forms::Button());
			this->bright_button = (gcnew System::Windows::Forms::Button());
			this->pano_button = (gcnew System::Windows::Forms::Button());
			this->canEd_button = (gcnew System::Windows::Forms::Button());
			this->face_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dil_button
			// 
			this->dil_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->dil_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->dil_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->dil_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dil_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dil_button->Location = System::Drawing::Point(12, 44);
			this->dil_button->Name = L"dil_button";
			this->dil_button->Size = System::Drawing::Size(208, 64);
			this->dil_button->TabIndex = 0;
			this->dil_button->Text = L"dilation/erosion";
			this->dil_button->UseVisualStyleBackColor = false;
			this->dil_button->Click += gcnew System::EventHandler(this, &MyForm::dil_button_Click);
			// 
			// resize_button
			// 
			this->resize_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->resize_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->resize_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->resize_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resize_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resize_button->Location = System::Drawing::Point(226, 44);
			this->resize_button->Name = L"resize_button";
			this->resize_button->Size = System::Drawing::Size(208, 64);
			this->resize_button->TabIndex = 1;
			this->resize_button->Text = L"resize";
			this->resize_button->UseVisualStyleBackColor = false;
			this->resize_button->Click += gcnew System::EventHandler(this, &MyForm::resize_button_Click);
			// 
			// bright_button
			// 
			this->bright_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->bright_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->bright_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->bright_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bright_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bright_button->Location = System::Drawing::Point(440, 44);
			this->bright_button->Name = L"bright_button";
			this->bright_button->Size = System::Drawing::Size(208, 64);
			this->bright_button->TabIndex = 2;
			this->bright_button->Text = L"brightness";
			this->bright_button->UseVisualStyleBackColor = false;
			this->bright_button->Click += gcnew System::EventHandler(this, &MyForm::bright_button_Click);
			// 
			// pano_button
			// 
			this->pano_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->pano_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->pano_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->pano_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pano_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pano_button->Location = System::Drawing::Point(12, 114);
			this->pano_button->Name = L"pano_button";
			this->pano_button->Size = System::Drawing::Size(208, 64);
			this->pano_button->TabIndex = 3;
			this->pano_button->Text = L"panorama/stitching";
			this->pano_button->UseVisualStyleBackColor = false;
			this->pano_button->Click += gcnew System::EventHandler(this, &MyForm::pano_button_Click);
			// 
			// canEd_button
			// 
			this->canEd_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->canEd_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->canEd_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->canEd_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->canEd_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->canEd_button->Location = System::Drawing::Point(226, 114);
			this->canEd_button->Name = L"canEd_button";
			this->canEd_button->Size = System::Drawing::Size(208, 64);
			this->canEd_button->TabIndex = 4;
			this->canEd_button->Text = L"canny edge detection";
			this->canEd_button->UseVisualStyleBackColor = false;
			this->canEd_button->Click += gcnew System::EventHandler(this, &MyForm::canEd_button_Click);
			// 
			// face_button
			// 
			this->face_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->face_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::MenuHighlight;
			this->face_button->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->face_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->face_button->Font = (gcnew System::Drawing::Font(L"Candara", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->face_button->Location = System::Drawing::Point(440, 114);
			this->face_button->Name = L"face_button";
			this->face_button->Size = System::Drawing::Size(208, 64);
			this->face_button->TabIndex = 5;
			this->face_button->Text = L"face recognition";
			this->face_button->UseVisualStyleBackColor = false;
			this->face_button->Click += gcnew System::EventHandler(this, &MyForm::face_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 35);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Choose an Action :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(671, 190);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->face_button);
			this->Controls->Add(this->canEd_button);
			this->Controls->Add(this->pano_button);
			this->Controls->Add(this->bright_button);
			this->Controls->Add(this->resize_button);
			this->Controls->Add(this->dil_button);
			this->Name = L"MyForm";
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dil_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		dil_form^ dil = gcnew dil_form();
		dil->ShowDialog();
	}
	private: System::Void resize_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		resize_form2^ resize = gcnew resize_form2();
		resize->ShowDialog();
	}
	private: System::Void bright_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		bright_form^ bright = gcnew bright_form();
		bright->ShowDialog();
	}
	private: System::Void pano_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		panorama_form^ pano = gcnew panorama_form();
		pano->ShowDialog();
	}
	private: System::Void canEd_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		cannyEdge_form^ cannyE = gcnew cannyEdge_form();
		cannyE->ShowDialog();
	}
	private: System::Void face_button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		face_form^ face = gcnew face_form();
		face->ShowDialog();

	}
};
}
