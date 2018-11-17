#include "fm_Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SolarSystem::fm_Main form;
	Application::Run(%form);
	return 0;
}