#pragma once
#include "ElectricCalc.h"
#include <complex>


namespace Zavrsni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Summary for GraphCompared
	/// </summary>
	public ref class GraphCompared : public System::Windows::Forms::Form
	{
	public:


		GraphCompared(void)
		{

		}


		void graphComperedWireRadius(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(elCalc1->getWireLenght());

			if (brKoraka == 2) {

				double wireRadius[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;
				

				for (int i = 0;i <= brKoraka;i++) {

					wireRadius[i] = tocka;
					tocka += var1;

					String^ name = "a = " + System::Convert::ToString(wireRadius[i]) + " [m]";
					createGraph(name);
					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;

					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(wireRadius[i], elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);

						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());

					}


				}

			}

			if (brKoraka == 3) {

				double wireRadius[4];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireRadius[i] = tocka;
					tocka += var1;

					String^ name = "a = " + System::Convert::ToString(wireRadius[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name

					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;

					for (int j = 0; j < elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(wireRadius[i], elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);

						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}


				}



			}

			if (brKoraka == 4) {

				double wireRadius[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireRadius[i] = tocka;
					tocka += var1;

					String^ name = "a = " + System::Convert::ToString(wireRadius[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name

					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;

					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(wireRadius[i], elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);

						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}


				}


			}

		


		}

		void graphComperedEspr(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(elCalc1->getWireLenght());

			if (brKoraka == 2) {

				double espr[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					espr[i] = tocka;
					tocka += var1;

					String^ name = "espr = " + System::Convert::ToString(espr[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name



					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(espr[i], elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);


						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());




					}


				}

			}

			if (brKoraka == 3) {

				double espr[4];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					espr[i] = tocka;
					tocka += var1;

					String^ name = "espr = " + System::Convert::ToString(espr[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name



					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(espr[i], elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);


						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());




					}


				}



			}

			if (brKoraka == 4) {

				double espr[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					espr[i] = tocka;
					tocka += var1;

					String^ name = "espr = " + System::Convert::ToString(espr[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name



					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(espr[i], elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);


						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());




					}


				}




			}




		}

		void graphComperedWireLenght(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(krajTocka);

			if (brKoraka == 2) {

				double wireLenght[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireLenght[i] = tocka;
					tocka += var1;

					String^ name = "L = " + System::Convert::ToString(wireLenght[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), wireLenght[i], elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), wireLenght[i], koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (wireLenght[i] / elCalc1->getNumOfSegments());


					}


				}

			}

			if (brKoraka == 3) {

				double wireLenght[4];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireLenght[i] = tocka;
					tocka += var1;

					String^ name = "L = " + System::Convert::ToString(wireLenght[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), wireLenght[i], elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), wireLenght[i], koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (wireLenght[i] / elCalc1->getNumOfSegments());


					}


				}



			}

			if (brKoraka == 4) {

				double wireLenght[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireLenght[i] = tocka;
					tocka += var1;

					String^ name = "L = " + System::Convert::ToString(wireLenght[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), wireLenght[i], elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), wireLenght[i], koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (wireLenght[i] / elCalc1->getNumOfSegments());


					}


				}


			}


		}

		void graphComperedWireHeight(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(elCalc1->getWireLenght());

			if (brKoraka == 2) {

				double wireHeight[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireHeight[i] = tocka;
					tocka += var1;

					String^ name = "h = " + System::Convert::ToString(wireHeight[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), wireHeight[i], elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);
						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}

				}

			}

			if (brKoraka == 3) {

				double wireHeight[4], h=4;
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireHeight[i] = tocka;
					tocka += var1;

					String^ name = "h = " + System::Convert::ToString(wireHeight[i]) + " [m]";
					createGraph(name);
	


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), wireHeight[i], elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);
						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}

				}

				


			}

			if (brKoraka == 4) {

				double wireHeight[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireHeight[i] = tocka;
					tocka += var1;

					String^ name = "h = " + System::Convert::ToString(wireHeight[i]) + " [m]";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), wireHeight[i], elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);


						writeToGraph(x, y1, y2, y3, name);
						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}

				}



			}


		}

		void graphComperedWireFrequency(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(elCalc1->getWireLenght());

			if (brKoraka == 2) {

				double wireFreq[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireFreq[i] = tocka;
					tocka += var1;

					String^ name = "f = " + System::Convert::ToString(wireFreq[i]) + " Hz";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0;j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), wireFreq[i], x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), wireFreq[i]);
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}


				}

			}

			if (brKoraka == 3) {

				double wireFreq[4];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireFreq[i] = tocka;
					tocka += var1;

					String^ name = "f = " + System::Convert::ToString(wireFreq[i]) + " Hz";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), wireFreq[i], x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), wireFreq[i]);
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}


				}

				




			}

			if (brKoraka == 4) {

				double wireFreq[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					wireFreq[i] = tocka;
					tocka += var1;

					String^ name = "f = " + System::Convert::ToString(wireFreq[i]) + " Hz";
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), wireFreq[i], x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), elCalc1->getSoilCond(), wireFreq[i]);
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());



					}


				}



			}


		}

		void graphComperedWireSigma(ElectricCalc^ elCalc1, double pocTocka, double krajTocka, int brKoraka)
		{
			InitializeComponent(elCalc1->getWireLenght());

			if (brKoraka == 2) {

				double sigma[3];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					sigma[i] = tocka;
					tocka += var1;

					String^ name = "sigma = " + System::Convert::ToString(sigma[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), sigma[i], elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());

					}

				}

			}

			if (brKoraka == 3) {

				double sigma[4];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					sigma[i] = tocka;
					tocka += var1;

					String^ name = "sigma = " + System::Convert::ToString(sigma[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), sigma[i], elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());

					}

				}


			}

			if (brKoraka == 4) {

				double sigma[5];
				double tocka = pocTocka;
				double var1 = (krajTocka - pocTocka) / brKoraka;

				for (int i = 0;i <= brKoraka;i++) {

					sigma[i] = tocka;
					tocka += var1;

					String^ name = "sigma = " + System::Convert::ToString(sigma[i]);
					createGraph(name);
					//salji u funkciju za izracun re, im i abs i ubaci u grafove
					//upis u graf di dodas parametar series name


					double x = 0.0;
					double y1 = 0.0, y2 = 0.0, y3 = 0.0;


					for (int j = 0; j <= elCalc1->getNumOfSegments(); j++)
					{
						complex <double>  koefRef, t1, calcEpsEf, struja;
						double var;



						var = elCalc1->calcVar(elCalc1->getVoltage(), elCalc1->getWireLenght(), elCalc1->getFrequency(), x);
						calcEpsEf = elCalc1->calcEpsEf(elCalc1->getRelDielect(), sigma[i], elCalc1->getFrequency());
						koefRef = elCalc1->koefRef(calcEpsEf);
						t1 = elCalc1->calcT1(elCalc1->getWireRadius(), elCalc1->getHeight(), elCalc1->getWireLenght(), koefRef);


						struja = elCalc1->claculateElect(var, t1);
						y1 = real(struja);
						y2 = imag(struja);
						y3 = abs(struja);

						writeToGraph(x, y1, y2, y3, name);

						x += (elCalc1->getWireLenght() / elCalc1->getNumOfSegments());

					}

				}
				

			}


		}


		void createGraph(String^ name) {
			System::Windows::Forms::DataVisualization::Charting::Series^ f1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1->Series->Add(name);
			this->chart1->Series[name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart1->Series[name]->Legend = L"Legend1";
			this->chart1->Series[name]->Name = name;
			this->chart1->Series[name]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series[name]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series[name]->ChartArea = L"ChartArea1";
			this->chart1->Series[name]->ChartArea = L"ChartArea1";


			System::Windows::Forms::DataVisualization::Charting::Series^ f2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart2->Series->Add(name);
			this->chart2->Series[name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart2->Series[name]->Legend = L"Legend1";
			this->chart2->Series[name]->Name = name;
			this->chart2->Series[name]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart2->Series[name]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart2->Series[name]->ChartArea = L"ChartArea1";
			this->chart2->Series[name]->ChartArea = L"ChartArea1";

			System::Windows::Forms::DataVisualization::Charting::Series^ f3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart3->Series->Add(name);
			this->chart3->Series[name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart3->Series[name]->Legend = L"Legend1";
			this->chart3->Series[name]->Name = name;
			this->chart3->Series[name]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart3->Series[name]->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart3->Series[name]->ChartArea = L"ChartArea1";
			this->chart3->Series[name]->ChartArea = L"ChartArea1";


		}

		void writeToGraph(double x, double y1, double y2, double y3, String^ name) {

			this->chart1->Series[name]->Points->AddXY(x, y1);
			this->chart2->Series[name]->Points->AddXY(x, y2);
			this->chart3->Series[name]->Points->AddXY(x, y3);

			this->chart2->Visible = false;
			this->chart3->Visible = false;


		}
		
		


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GraphCompared()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(double max)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			//this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			//// 
			//// comboBox1
			//// 
			//this->comboBox1->FormattingEnabled = true;
			//this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Re(I)", L"Im(I)", L"Abs(I)" });
			//this->comboBox1->Location = System::Drawing::Point(891, 564);
			//this->comboBox1->Name = L"comboBox1";
			//this->comboBox1->Size = System::Drawing::Size(121, 24);
			//this->comboBox1->TabIndex = 0;
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->Title = L"L/N [m]";
			chartArea1->AxisX->Maximum = max;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->Title = L"Re(I) [A]";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(40, 30);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->chart1->Size = System::Drawing::Size(900, 530);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->AxisX->Title = L"L/N [m]";
			chartArea2->AxisX->Maximum = max;
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->AxisY->Title = L"Im(I) [A]";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(40, 30);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->chart2->Size = System::Drawing::Size(900, 530);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea3->AxisX->Title = L"L/N [m]";
			chartArea3->AxisX->Maximum = max;
			chartArea3->AxisX->Minimum = 0;
			chartArea3->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea3->AxisY->Title = L"Abs(I) [A]";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(40, 30);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->chart3->Size = System::Drawing::Size(900, 530);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";

			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(574, 605);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Re(I)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraphCompared::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(707, 605);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Im(I)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GraphCompared::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(839, 604);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Abs(I)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GraphCompared::button3_Click);
			
			// 
			// GraphCompared
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1063, 661);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"GraphCompared";
			this->Text = L"GraphCompared";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->chart1->Visible = true;
			this->chart2->Visible = false;
			this->chart3->Visible = false;
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->chart2->Visible = true;
			this->chart1->Visible = false;
			this->chart3->Visible = false;
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->chart3->Visible = true;
			this->chart1->Visible = false;
			this->chart2->Visible = false;
		}
	
};
}
