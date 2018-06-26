#include "GUI.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(/*array<String^>^ args*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProgrammingCourseWork::GUI form;
	Application::Run(%form);
}

