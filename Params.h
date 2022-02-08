#pragma once

#include "Graph.h"
#include "ElectricCalc.h"
#include "GraphCompared.h"







namespace Zavrsni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Params
	/// </summary>
	public ref class Params : public System::Windows::Forms::Form
	{
	public:
		Params(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Params()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(41, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"L (duljina zice) [m]:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a (radijus zice) [m]:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 238);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"f (frekvencija) [MHz]:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"E(indc) [V]:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(435, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(273, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"h (visina antene iznad tla) [m]:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(435, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(327, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"epsr (relativna dielektričnost zemlje):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(435, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(283, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"sigma (vodljivost zemlje) [S/m]:";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(267, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 28);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(267, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(267, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 30);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(267, 301);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 30);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(817, 101);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 30);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(817, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 30);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(817, 240);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 30);
			this->textBox7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(435, 304);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"N (broj segmenata duž žice):";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(817, 304);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 30);
			this->textBox8->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(760, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 67);
			this->button1->TabIndex = 16;
			this->button1->Text = L"UNESI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Params::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(124, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(727, 58);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Analiticko rjesenje Pocklingtonove jednadzbe";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"a [m]", L"epsr", L"f [MHz]", L"h [m]", L"L [m]",
					L"sigma"
			});
			this->comboBox1->Location = System::Drawing::Point(187, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 18;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->comboBox1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->comboBox2, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button3, 1, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(283, 367);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.47887F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.52113F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 61)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(368, 271);
			this->tableLayoutPanel1->TabIndex = 19;
			this->tableLayoutPanel1->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 25);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Parametar:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 25);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Početna točka";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 104);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 25);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Krajnja točka";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 25);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Br. koraka";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(187, 51);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(187, 107);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 20;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"4" });
			this->comboBox2->Location = System::Drawing::Point(187, 159);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(187, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 45);
			this->button3->TabIndex = 22;
			this->button3->Text = L"USPOREDI";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Params::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 45);
			this->button2->TabIndex = 20;
			this->button2->Text = L"USPOREDBA RJEŠENJA";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Params::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Params
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 675);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Params";
			this->Text = L"Params";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		
		
		double var1 = System::Convert::ToDouble(textBox1->Text);
		double var2 = System::Convert::ToDouble(textBox2->Text);
		double var3 = System::Convert::ToDouble(textBox3->Text) * 1e6;
		double var4 = System::Convert::ToDouble(textBox4->Text);
		double var5 = System::Convert::ToDouble(textBox5->Text);
		double var6 = System::Convert::ToDouble(textBox6->Text);
		double var7 = System::Convert::ToDouble(textBox7->Text);
		double var8 = System::Convert::ToDouble(textBox8->Text);

		
		
		
		ElectricCalc^ elCalc = gcnew ElectricCalc();

		elCalc->setWireLenght(var1);
		elCalc->setWireRadius(var2);
		elCalc->setFrequency(var3);
		elCalc->setVoltage(var4);
		elCalc->setHeight(var5);
		elCalc->setRelDielect(var6);
		elCalc->setSoilCond(var7);
		elCalc->setNumOfSegments(var8);

		//elCalc->ClaculateElect(var1, var2);

		Graph^ graph = gcnew Graph(this,elCalc);
		graph->Show();

	
		
		
	
		//Table^ table = gcnew Table(graph, elCalc);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tableLayoutPanel1->Visible = true;


}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {



		if (this->comboBox1->SelectedItem->Equals("a [m]") == true)
		{

			double var1 = System::Convert::ToDouble(textBox1->Text);
			//double var2 = System::Convert::ToDouble(textBox2->Text);
			double var3 = System::Convert::ToDouble(textBox3->Text)*1e6;
			double var4 = System::Convert::ToDouble(textBox4->Text);
			double var5 = System::Convert::ToDouble(textBox5->Text);
			double var6 = System::Convert::ToDouble(textBox6->Text);
			double var7 = System::Convert::ToDouble(textBox7->Text);
			double var8 = System::Convert::ToDouble(textBox8->Text);
			double pocTocka = System::Convert::ToDouble(textBox9->Text);
			double krTocka = System::Convert::ToDouble(textBox10->Text);
			int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
			this->textBox2->ReadOnly = true;

			ElectricCalc^ elCalc = gcnew ElectricCalc();

			elCalc->setWireLenght(var1);
			elCalc->setWireRadius(0.0);
			elCalc->setFrequency(var3);
			elCalc->setVoltage(var4);
			elCalc->setHeight(var5);
			elCalc->setRelDielect(var6);
			elCalc->setSoilCond(var7);
			elCalc->setNumOfSegments(var8);

			GraphCompared^ grComp = gcnew GraphCompared();
			grComp->graphComperedWireRadius(elCalc, pocTocka, krTocka, brKoraka);

			grComp->Show();
		}


				if (this->comboBox1->SelectedItem->Equals("epsr") == true)
				{
		
					double var1 = System::Convert::ToDouble(textBox1->Text);
					double var2 = System::Convert::ToDouble(textBox2->Text);
					double var3 = System::Convert::ToDouble(textBox3->Text) * 1e6;
					double var4 = System::Convert::ToDouble(textBox4->Text);
					double var5 = System::Convert::ToDouble(textBox5->Text);
					//double var6 = System::Convert::ToDouble(textBox6->Text);
					double var7 = System::Convert::ToDouble(textBox7->Text);
					double var8 = System::Convert::ToDouble(textBox8->Text);
					double pocTocka = System::Convert::ToDouble(textBox9->Text);
					double krTocka = System::Convert::ToDouble(textBox10->Text);
					int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
		
					this->textBox6->ReadOnly = true;
					ElectricCalc^ elCalc = gcnew ElectricCalc();
		
					elCalc->setWireLenght(var1);
					elCalc->setWireRadius(var2);
					elCalc->setFrequency(var3);
					elCalc->setVoltage(var4);
					elCalc->setHeight(var5);
					elCalc->setRelDielect(0.0);
					elCalc->setSoilCond(var7);
					elCalc->setNumOfSegments(var8);
		
					GraphCompared^ grComp = gcnew GraphCompared();
					grComp->graphComperedEspr(elCalc, pocTocka, krTocka, brKoraka);
		
					grComp->Show();
				}
		
		
		
		
				if (this->comboBox1->SelectedItem->Equals("f [MHz]") == true)
				{
		
					double var1 = System::Convert::ToDouble(textBox1->Text);
					double var2 = System::Convert::ToDouble(textBox2->Text);
					//double var3 = System::Convert::ToDouble(textBox3->Text);
					double var4 = System::Convert::ToDouble(textBox4->Text);
					double var5 = System::Convert::ToDouble(textBox5->Text);
					double var6 = System::Convert::ToDouble(textBox6->Text);
					double var7 = System::Convert::ToDouble(textBox7->Text);
					double var8 = System::Convert::ToDouble(textBox8->Text);
					double pocTocka = System::Convert::ToDouble(textBox9->Text);
					double krTocka = System::Convert::ToDouble(textBox10->Text);
					int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
		
					this->textBox3->ReadOnly = true;
					ElectricCalc^ elCalc = gcnew ElectricCalc();
		
					elCalc->setWireLenght(var1);
					elCalc->setWireRadius(var2);
					elCalc->setFrequency(0.0);
					elCalc->setVoltage(var4);
					elCalc->setHeight(var5);
					elCalc->setRelDielect(var6);
					elCalc->setSoilCond(var7);
					elCalc->setNumOfSegments(var8);
		
					GraphCompared^ grComp = gcnew GraphCompared();
					grComp->graphComperedWireFrequency(elCalc, pocTocka * 1e6, krTocka * 1e6, brKoraka);
					grComp->Show();
				}
		
		
				if (this->comboBox1->SelectedItem->Equals("h [m]") == true)
				{
		
					double var1 = System::Convert::ToDouble(textBox1->Text);
					double var2 = System::Convert::ToDouble(textBox2->Text);
					double var3 = System::Convert::ToDouble(textBox3->Text) * 1e6;
					double var4 = System::Convert::ToDouble(textBox4->Text);
					//double var5 = System::Convert::ToDouble(textBox5->Text);
					double var6 = System::Convert::ToDouble(textBox6->Text);
					double var7 = System::Convert::ToDouble(textBox7->Text);
					double var8 = System::Convert::ToDouble(textBox8->Text);
					double pocTocka = System::Convert::ToDouble(textBox9->Text);
					double krTocka = System::Convert::ToDouble(textBox10->Text);
					int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
		
					this->textBox5->ReadOnly = true;
					ElectricCalc^ elCalc = gcnew ElectricCalc();
		
					elCalc->setWireLenght(var1);
					elCalc->setWireRadius(var2);
					elCalc->setFrequency(var3);
					elCalc->setVoltage(var4);
					elCalc->setHeight(0.0);
					elCalc->setRelDielect(var6);
					elCalc->setSoilCond(var7);
					elCalc->setNumOfSegments(var8);
		
					GraphCompared^ grComp = gcnew GraphCompared();
					grComp->graphComperedWireHeight(elCalc, pocTocka, krTocka, brKoraka);
					grComp->Show();
				}
		
				if (this->comboBox1->SelectedItem->Equals("L [m]") == true)
				{
		
					//double var1 = System::Convert::ToDouble(textBox1->Text);
					double var2 = System::Convert::ToDouble(textBox2->Text);
					double var3 = System::Convert::ToDouble(textBox3->Text) * 1e6;
					double var4 = System::Convert::ToDouble(textBox4->Text);
					double var5 = System::Convert::ToDouble(textBox5->Text);
					double var6 = System::Convert::ToDouble(textBox6->Text);
					double var7 = System::Convert::ToDouble(textBox7->Text);
					double var8 = System::Convert::ToDouble(textBox8->Text);
					double pocTocka = System::Convert::ToDouble(textBox9->Text);
					double krTocka = System::Convert::ToDouble(textBox10->Text);
					int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
		
					this->textBox1->ReadOnly = true;
					ElectricCalc^ elCalc = gcnew ElectricCalc();
		
					elCalc->setWireLenght(0.0);
					elCalc->setWireRadius(var2);
					elCalc->setFrequency(var3);
					elCalc->setVoltage(var4);
					elCalc->setHeight(var5);
					elCalc->setRelDielect(var6);
					elCalc->setSoilCond(var7);
					elCalc->setNumOfSegments(var8);
		
					GraphCompared^ grComp = gcnew GraphCompared();
					grComp->graphComperedWireLenght(elCalc, pocTocka, krTocka, brKoraka);
					grComp->Show();
				}
		
				if (this->comboBox1->SelectedItem->Equals("sigma") == true)
				{
		
					double var1 = System::Convert::ToDouble(textBox1->Text);
					double var2 = System::Convert::ToDouble(textBox2->Text);
					double var3 = System::Convert::ToDouble(textBox3->Text) * 1e6;
					double var4 = System::Convert::ToDouble(textBox4->Text);
					double var5 = System::Convert::ToDouble(textBox5->Text);
					double var6 = System::Convert::ToDouble(textBox6->Text);
					//double var7 = System::Convert::ToDouble(textBox7->Text);
					double var8 = System::Convert::ToDouble(textBox8->Text);
					double pocTocka = System::Convert::ToDouble(textBox9->Text);
					double krTocka = System::Convert::ToDouble(textBox10->Text);
					int brKoraka = System::Convert::ToInt32(this->comboBox2->SelectedItem);
		
					this->textBox7->ReadOnly = true;
					ElectricCalc^ elCalc = gcnew ElectricCalc();
		
					elCalc->setWireLenght(var1);
					elCalc->setWireRadius(var2);
					elCalc->setFrequency(var3);
					elCalc->setVoltage(var4);
					elCalc->setHeight(var5);
					elCalc->setRelDielect(var6);
					elCalc->setSoilCond(0.0);
					elCalc->setNumOfSegments(var8);
		
					GraphCompared^ grComp = gcnew GraphCompared();
					grComp->graphComperedWireSigma(elCalc, pocTocka, krTocka, brKoraka);
					grComp->Show();
				}
		
		
			}
		};
		}

	
