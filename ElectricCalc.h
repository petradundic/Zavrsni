#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <complex>
#include <corecrt_math_defines.h>

using namespace std;

const double mi0 = (4.0 * M_PI * pow(10,-7));
const double eps0 = (8.854 * pow(10, -12));
const double z0 = sqrt(mi0/eps0);

const complex<double> jot = complex<double>(0, 1);



ref class ElectricCalc
{
	private:
		double L_wireLenght;					//duljina žice
		double a_wireRadius;					//radijus žice
		double frequency;						//frekvencija
		double U_voltage;						//ulazni napon
		double height;							//visina antene iznad zemlje
		double RelDielect;						//relativna dielektri?nost zemlje
		double SoilConductivity;				//vodljivost zemlje u S/m
		double NumOfWireSegments;				//broj segmenata duž žice u kojima se ra?una

	public:

		ElectricCalc(void) {}
		//getters and setters
		void setWireLenght(double L)
		{
			L_wireLenght = L;
		}
		double getWireLenght()
		{
			return L_wireLenght;
		}

		void setWireRadius(double a)
		{
			a_wireRadius = a;
		}
		double getWireRadius()
		{
			return a_wireRadius;
		}

		void setFrequency(double f)
		{
			frequency = f;
		}
		double getFrequency()
		{
			return frequency;
		}

		void setVoltage(double U)
		{
			U_voltage = U;
		}
		double getVoltage()
		{
			return U_voltage;
		}

		void setHeight(double h)
		{
			height = h;
		}
		double getHeight()
		{
			return height;
		}

		void setRelDielect(double espr)
		{
			RelDielect=espr;
		}
		double getRelDielect()
		{
			return RelDielect;
		}

		void setSoilCond(double sigma)
		{
			SoilConductivity = sigma;
		}
		double getSoilCond()
		{
			return SoilConductivity;
		}

		void setNumOfSegments(double num)
		{
			NumOfWireSegments = num;
		}
		double getNumOfSegments()
		{
			return NumOfWireSegments;
		}

		//calculation

		double calcVar(double indcE, double L, double f,double x) {
			double var = 0;
			double k = 0;
		
			k = 2.0 * M_PI * f * sqrt(mi0 * eps0);
			var = (4.0 * M_PI * indcE * (1.0 - (cos(k * (L/2.0 - x)) / cos(k * L/2.0)))) / (k * z0);
			
			return var;
		}

		complex <double> calcEpsEf(double espr, double sigma, double f) {
			double KruzFrek = 0;

			KruzFrek = 2.0 * M_PI * f;
			return ((espr*eps0)+(sigma/(jot*KruzFrek)));
		}

		complex <double> koefRef(complex <double> epsef) {
			
			return ((epsef-eps0)/(epsef+eps0));

		}

		complex <double> calcT1(double a, double h, double L, complex <double> koefRef)
		{
	
			return (2.0*(log(L/a)-(koefRef*log(L/(2.0*h)))));

		}
		
		
		complex <double> claculateElect(double var, complex <double> t1)
		{
			return (var*(1.0/t1)*jot);
		}


		
		
};



