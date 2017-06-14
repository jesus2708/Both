#include "stdafx.h"  //________________________________________ Both.cpp
#include "Both.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Both app;
	return app.BeginDialog(IDI_Both, hInstance);
}

void Both::Window_Open(Win::Event& e)
{
	wstring hola = L"par       impar\r\n------------\r\n";
	tbx1.Text = hola;
	for (int i = 0; i < 18; i++)
	{
		wstring salida;
		wstring salida1;
		if ((i % 2) != 0)
		{

			salida += Sys::Convert::ToString(i);
			salida += L"\r\n";
			tbx1.Text += salida;
		}
		else 
		{
			salida1 += Sys::Convert::ToString(i);
			salida1 += L"              ";
			tbx1.Text += salida1;
		}
		
	}
}

