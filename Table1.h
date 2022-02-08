#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>


namespace Zavrsni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Table1
	/// </summary>
	public ref class Table1 : public System::Windows::Forms::Form
	{
	public:
		
		
		Table1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		void writeToTable(double y1, double y2, double y3, double y4) {
		
			String^ var1 =y1.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			String^ var2 = y2.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			String^ var3 = y3.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			String^ var4 = y4.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			this->dataGridView1->Rows->Add(var1, var2, var3, var4);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Table1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(100, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(503, 433);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Re(I) [A]";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Im(I) [A]";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Abs(I) [A]";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"L/N [m]";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Table1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 622);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Table1";
			this->Text = L"Table1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
