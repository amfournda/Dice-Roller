#include "roller.h"
#include <Windows.h>

using namespace DiceRoller;
using namespace System;

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
	) {
	Roller^ roll = gcnew Roller();
	roll->Show();
	System::Windows::Forms::Application::Run(roll);
	return 0;
}
