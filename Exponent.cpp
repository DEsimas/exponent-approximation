#include "Exponent.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	L6::Exponent form;
	Application::Run(% form);
}