#pragma once

#include "ElectricCalc.h"
#include "Table1.h"
#include <complex>
#include <sstream>


namespace Zavrsni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Table1^ tb = gcnew Table1();
		
		Graph(void)
		{
			InitializeComponent(0.0);
			//
			//TODO: Add the constructor code here
			//
		}

		
		Graph(Form^ obj1,ElectricCalc^ elCalc1)
		{	
			double max = elCalc1->getWireLenght();
			InitializeComponent(max);
			obj = obj1;
			double x = 0.0;
			double y1 =2.0, y2 =3.0, y3=4.0;
			
			
			
			StreamWriter^ file = gcnew StreamWriter("SavedResult.txt");
			file->Write("\tRe(I) [A]\tIm(I) [A]\tAbs(I) [A]\n");

		
				for (int i = 0; i <= elCalc1->getNumOfSegments(); i++)
				{
					complex <double>  koefRef, t1, calcEpsEf, struja;
					double var;
					

					var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
					calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
					koefRef = elCalc1->koefRef(calcEpsEf);
					t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);

					struja = elCalc1->claculateElect(var, t1);

					y1 = real(struja);
					y2 = imag(struja);
					y3 = abs(struja);




					writeToGraph(x, y1, y2, y3);

					
					tb->writeToTable(y1, y2, y3, x);
					writeToTxtFile(file, y1, y2, y3);

					x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());

				}


				file->Close();



			}

			

		
			void writeToGraph(double x, double y1, double y2, double y3){
		 
			this->chart1->Series["Re(I) [A]"]->Points->AddXY(x, y1);
			this->chart1->Series["Im(I) [A]"]->Points->AddXY(x, y2);
			this->chart1->Series["Abs(I) [A]"]->Points->AddXY(x, y3);

		

		}

		
		void writeToTxtFile(StreamWriter^ file,double y1, double y2, double y3)
		{
			String^ var1 = y1.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			String^ var2 = y2.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			String^ var3 = y3.ToString("E04", System::Globalization::CultureInfo::CreateSpecificCulture("en-Us"));
			
			
			file->Write("\t"+var1 + "\t\t\t" + var2 + "\t\t\t" + var3 + "\n");
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


	private: System::Windows::Forms::Button^ button1;








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
		void InitializeComponent(double max)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->Maximum=max;
			chartArea1->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea1->AxisX->Title = L"L/N [m]";
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->Title = L"Re(I) [A]; Im(I) [A]; Abs(I) [A]";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(25, 25);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->Legend = L"Legend1";
			series1->MarkerColor = System::Drawing::Color::White;
			series1->Name = L"Re(I) [A]";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Aqua;
			series2->Legend = L"Legend1";
			series2->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Name = L"Im(I) [A]";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->LabelBackColor = System::Drawing::Color::Transparent;
			series3->Legend = L"Legend1";
			series3->MarkerColor = System::Drawing::Color::Transparent;
			series3->Name = L"Abs(I) [A]";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1122, 615);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(915, 646);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 68);
			this->button1->TabIndex = 3;
			this->button1->Text = L"TABLICA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Graph::button1_Click);
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1159, 801);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"Graph";
			this->Text = L"Graph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	tb->ShowDialog();
}


};
}
