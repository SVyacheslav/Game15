#include "FormGame15.h"
//#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Game15CLR::FormGame15 form;
	Application::Run(%form);
}

