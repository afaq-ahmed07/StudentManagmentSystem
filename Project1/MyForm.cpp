#include "MyForm.h"
#include<Windows.h>
using namespace System;
using namespace System::Windows::Forms;
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Project1::MyForm());
	return 0;
}

