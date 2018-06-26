#pragma once
#include <string>
#include "Sorting.h"
#include <msclr/marshal_cppstd.h>
#include <ctime>
namespace ProgrammingCourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  algorithmAnimationGif;
	protected:
	private: System::Windows::Forms::Panel^  algorithmSelectPanel;
	private: System::Windows::Forms::RadioButton^  treeSortRadioButton;
	private: System::Windows::Forms::RadioButton^  quickSortRadioButton;
	private: System::Windows::Forms::RadioButton^  mergeSortRadioButton;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::TextBox^  outputFilePath;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelAlgorithmGif;
	private: System::Windows::Forms::NumericUpDown^  arraySizeSelect;

	private: System::Windows::Forms::Label^  labelArraySizeSelect;
	private: System::Windows::Forms::Label^  labelOutputFilePath;
	private: System::Windows::Forms::NumericUpDown^  minValue;
	private: System::Windows::Forms::NumericUpDown^  maxValue;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->algorithmAnimationGif = (gcnew System::Windows::Forms::PictureBox());
			this->algorithmSelectPanel = (gcnew System::Windows::Forms::Panel());
			this->treeSortRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->mergeSortRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->quickSortRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->outputFilePath = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelAlgorithmGif = (gcnew System::Windows::Forms::Label());
			this->arraySizeSelect = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelArraySizeSelect = (gcnew System::Windows::Forms::Label());
			this->labelOutputFilePath = (gcnew System::Windows::Forms::Label());
			this->minValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->algorithmAnimationGif))->BeginInit();
			this->algorithmSelectPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arraySizeSelect))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxValue))->BeginInit();
			this->SuspendLayout();
			// 
			// algorithmAnimationGif
			// 
			this->algorithmAnimationGif->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"algorithmAnimationGif.Image")));
			this->algorithmAnimationGif->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"algorithmAnimationGif.InitialImage")));
			this->algorithmAnimationGif->Location = System::Drawing::Point(32, 180);
			this->algorithmAnimationGif->Margin = System::Windows::Forms::Padding(2);
			this->algorithmAnimationGif->Name = L"algorithmAnimationGif";
			this->algorithmAnimationGif->Size = System::Drawing::Size(307, 180);
			this->algorithmAnimationGif->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->algorithmAnimationGif->TabIndex = 0;
			this->algorithmAnimationGif->TabStop = false;
			// 
			// algorithmSelectPanel
			// 
			this->algorithmSelectPanel->Controls->Add(this->treeSortRadioButton);
			this->algorithmSelectPanel->Controls->Add(this->mergeSortRadioButton);
			this->algorithmSelectPanel->Controls->Add(this->quickSortRadioButton);
			this->algorithmSelectPanel->Location = System::Drawing::Point(197, 54);
			this->algorithmSelectPanel->Margin = System::Windows::Forms::Padding(2);
			this->algorithmSelectPanel->Name = L"algorithmSelectPanel";
			this->algorithmSelectPanel->Size = System::Drawing::Size(123, 94);
			this->algorithmSelectPanel->TabIndex = 1;
			// 
			// treeSortRadioButton
			// 
			this->treeSortRadioButton->AutoSize = true;
			this->treeSortRadioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->treeSortRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->treeSortRadioButton->Location = System::Drawing::Point(10, 60);
			this->treeSortRadioButton->Margin = System::Windows::Forms::Padding(2);
			this->treeSortRadioButton->Name = L"treeSortRadioButton";
			this->treeSortRadioButton->Size = System::Drawing::Size(80, 20);
			this->treeSortRadioButton->TabIndex = 2;
			this->treeSortRadioButton->TabStop = true;
			this->treeSortRadioButton->Text = L"Tree sort";
			this->treeSortRadioButton->UseVisualStyleBackColor = true;
			this->treeSortRadioButton->CheckedChanged += gcnew System::EventHandler(this, &GUI::treeSortRadioButton_CheckedChanged);
			// 
			// mergeSortRadioButton
			// 
			this->mergeSortRadioButton->AutoSize = true;
			this->mergeSortRadioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mergeSortRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mergeSortRadioButton->Location = System::Drawing::Point(10, 16);
			this->mergeSortRadioButton->Margin = System::Windows::Forms::Padding(2);
			this->mergeSortRadioButton->Name = L"mergeSortRadioButton";
			this->mergeSortRadioButton->Size = System::Drawing::Size(90, 20);
			this->mergeSortRadioButton->TabIndex = 0;
			this->mergeSortRadioButton->TabStop = true;
			this->mergeSortRadioButton->Text = L"Merge sort";
			this->mergeSortRadioButton->UseVisualStyleBackColor = true;
			this->mergeSortRadioButton->CheckedChanged += gcnew System::EventHandler(this, &GUI::mergeSortRadioButton_CheckedChanged);
			// 
			// quickSortRadioButton
			// 
			this->quickSortRadioButton->AutoSize = true;
			this->quickSortRadioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quickSortRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->quickSortRadioButton->Location = System::Drawing::Point(10, 38);
			this->quickSortRadioButton->Margin = System::Windows::Forms::Padding(2);
			this->quickSortRadioButton->Name = L"quickSortRadioButton";
			this->quickSortRadioButton->Size = System::Drawing::Size(85, 20);
			this->quickSortRadioButton->TabIndex = 1;
			this->quickSortRadioButton->TabStop = true;
			this->quickSortRadioButton->Text = L"Quick sort";
			this->quickSortRadioButton->UseVisualStyleBackColor = true;
			this->quickSortRadioButton->CheckedChanged += gcnew System::EventHandler(this, &GUI::quickSortRadioButton_CheckedChanged);
			// 
			// startButton
			// 
			this->startButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->startButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->startButton->FlatAppearance->BorderSize = 10;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(110, 410);
			this->startButton->Margin = System::Windows::Forms::Padding(2);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(145, 55);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &GUI::startButton_Click);
			// 
			// outputFilePath
			// 
			this->outputFilePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputFilePath->Location = System::Drawing::Point(31, 379);
			this->outputFilePath->Margin = System::Windows::Forms::Padding(2);
			this->outputFilePath->MaxLength = 250;
			this->outputFilePath->Name = L"outputFilePath";
			this->outputFilePath->Size = System::Drawing::Size(308, 22);
			this->outputFilePath->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(195, 38);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Choose algorithm";
			// 
			// labelAlgorithmGif
			// 
			this->labelAlgorithmGif->AutoSize = true;
			this->labelAlgorithmGif->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAlgorithmGif->Location = System::Drawing::Point(30, 163);
			this->labelAlgorithmGif->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAlgorithmGif->Name = L"labelAlgorithmGif";
			this->labelAlgorithmGif->Size = System::Drawing::Size(158, 16);
			this->labelAlgorithmGif->TabIndex = 5;
			this->labelAlgorithmGif->Text = L"Sample of algorithm work";
			// 
			// arraySizeSelect
			// 
			this->arraySizeSelect->Cursor = System::Windows::Forms::Cursors::Hand;
			this->arraySizeSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->arraySizeSelect->Location = System::Drawing::Point(32, 52);
			this->arraySizeSelect->Margin = System::Windows::Forms::Padding(2);
			this->arraySizeSelect->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->arraySizeSelect->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->arraySizeSelect->Name = L"arraySizeSelect";
			this->arraySizeSelect->Size = System::Drawing::Size(90, 22);
			this->arraySizeSelect->TabIndex = 6;
			this->arraySizeSelect->ThousandsSeparator = true;
			this->arraySizeSelect->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->arraySizeSelect->ValueChanged += gcnew System::EventHandler(this, &GUI::arraySizeSelect_ValueChanged);
			// 
			// labelArraySizeSelect
			// 
			this->labelArraySizeSelect->AutoSize = true;
			this->labelArraySizeSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelArraySizeSelect->Location = System::Drawing::Point(30, 36);
			this->labelArraySizeSelect->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelArraySizeSelect->Name = L"labelArraySizeSelect";
			this->labelArraySizeSelect->Size = System::Drawing::Size(107, 16);
			this->labelArraySizeSelect->TabIndex = 7;
			this->labelArraySizeSelect->Text = L"Select array size";
			// 
			// labelOutputFilePath
			// 
			this->labelOutputFilePath->AutoSize = true;
			this->labelOutputFilePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelOutputFilePath->Location = System::Drawing::Point(29, 362);
			this->labelOutputFilePath->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelOutputFilePath->Name = L"labelOutputFilePath";
			this->labelOutputFilePath->Size = System::Drawing::Size(127, 16);
			this->labelOutputFilePath->TabIndex = 8;
			this->labelOutputFilePath->Text = L"Write output file path";
			// 
			// minValue
			// 
			this->minValue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minValue->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->minValue->Location = System::Drawing::Point(33, 92);
			this->minValue->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->minValue->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->minValue->Name = L"minValue";
			this->minValue->Size = System::Drawing::Size(89, 22);
			this->minValue->TabIndex = 9;
			this->minValue->ThousandsSeparator = true;
			this->minValue->ValueChanged += gcnew System::EventHandler(this, &GUI::minValue_ValueChanged);
			// 
			// maxValue
			// 
			this->maxValue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->maxValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxValue->Location = System::Drawing::Point(33, 132);
			this->maxValue->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->maxValue->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->maxValue->Name = L"maxValue";
			this->maxValue->Size = System::Drawing::Size(89, 22);
			this->maxValue->TabIndex = 10;
			this->maxValue->ThousandsSeparator = true;
			this->maxValue->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->maxValue->ValueChanged += gcnew System::EventHandler(this, &GUI::maxValue_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Min value";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(30, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Max value";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(366, 472);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->maxValue);
			this->Controls->Add(this->minValue);
			this->Controls->Add(this->labelOutputFilePath);
			this->Controls->Add(this->labelArraySizeSelect);
			this->Controls->Add(this->arraySizeSelect);
			this->Controls->Add(this->labelAlgorithmGif);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->outputFilePath);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->algorithmSelectPanel);
			this->Controls->Add(this->algorithmAnimationGif);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(379, 251);
			this->Name = L"GUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Course Work";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->algorithmAnimationGif))->EndInit();
			this->algorithmSelectPanel->ResumeLayout(false);
			this->algorithmSelectPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arraySizeSelect))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxValue))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void mergeSortRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	algorithmAnimationGif->ImageLocation = System::Environment::CurrentDirectory + "\\images\\Mergesort.gif";
}
private: System::Void quickSortRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	algorithmAnimationGif->ImageLocation = System::Environment::CurrentDirectory +  "\\images\\Quicksort.gif";
}
private: System::Void treeSortRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	algorithmAnimationGif->ImageLocation = System::Environment::CurrentDirectory + "\\images\\TreeSort.gif";
}
private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string algoritm;
	if (mergeSortRadioButton->Checked) algoritm = "merge";
	else if (quickSortRadioButton->Checked) algoritm = "quick";
	else algoritm = "tree";
	int array_size = Convert::ToInt32(arraySizeSelect->Value);
	std::string file_path = msclr::interop::marshal_as<std::string>(outputFilePath->Text);
	int min = Convert::ToInt32(minValue->Value);
	int max = Convert::ToInt32(maxValue->Value);
	int comparison_сount = 0;
	unsigned int start_time = clock();
	if (sort(algoritm, array_size, min, max, file_path,&comparison_сount) == 0) {
		unsigned int end_time = clock();
		this->arraySizeSelect->Value = 1000;
		this->maxValue->Value = 1;
		this->minValue->Value = 1;
		this->mergeSortRadioButton->Checked = true;
		this->outputFilePath->Text = "";
		std::string result_message = "Sorting complited successfully!\nComparsions count: ";
		result_message += std::to_string(comparison_сount);
		result_message += "\nSorting time: ";
		result_message += std::to_string(end_time - start_time)+ " ms";
		MessageBox::Show(msclr::interop::marshal_as<System::String^>(result_message));
	}
	else {
		this->outputFilePath->Text = "";
		MessageBox::Show("Invalid file path! Try again.");
	}
	this->arraySizeSelect->Value = 1000;
	this->maxValue->Value = 1;
	this->minValue->Value = 1;
	this->mergeSortRadioButton->Checked = true;
	this->outputFilePath->Text = "";
}

private: System::Void minValue_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int min = Convert::ToInt32(minValue->Value);
	int max = Convert::ToInt32(maxValue->Value);
	if (min >= max) maxValue->Value = min + 1;
	if (min < minValue->Minimum) minValue->Value = minValue->Minimum;
}
private: System::Void maxValue_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int min = Convert::ToInt32(minValue->Value);
	int max = Convert::ToInt32(maxValue->Value);
	if (min >= max) minValue->Value = max - 1;
	if (max > maxValue->Maximum) maxValue->Value = maxValue->Maximum;
}
private: System::Void arraySizeSelect_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int size = Convert::ToInt32(arraySizeSelect->Value);
	if (size < 2) arraySizeSelect->Value = 2;
	if (size > arraySizeSelect->Maximum) arraySizeSelect->Value = arraySizeSelect->Maximum;
}

private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
	mergeSortRadioButton->Checked = true;

}
};
}
