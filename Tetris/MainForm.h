#pragma once

namespace Tetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPlay;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Label^  lblScore;

	private: System::Windows::Forms::Label^  label2;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(513, 471);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(98, 80);
			this->btnPlay->TabIndex = 0;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MainForm::btnPlay_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::Color::White;
			this->pictureBox->Location = System::Drawing::Point(12, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(495, 541);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->Font = (gcnew System::Drawing::Font(L"Mistral", 30));
			this->lblScore->Location = System::Drawing::Point(515, 93);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(38, 48);
			this->lblScore->TabIndex = 2;
			this->lblScore->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 35));
			this->label2->Location = System::Drawing::Point(513, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 56);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Score:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 565);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblScore);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->btnPlay);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
};
}
