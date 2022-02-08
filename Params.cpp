#include <iostream>
#include "Params.h"
#include "Graph.h"
#include "Table1.h"
#include "GraphCompared.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Zavrsni::Params form1;
	Zavrsni::Graph form2;
	Zavrsni::Table1 form3;
	Zavrsni::GraphCompared form4;
	
	Application::Run(% form1);
	Application::Run(% form2);
	Application::Run(% form3);
	Application::Run(% form4);

	


}