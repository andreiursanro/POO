#include "pch.h"
// In unele cazuri putem folosi #include "stdafx.h"
using namespace System;
// PROIECTUL TREBUIE SA FIE DE TIPUL CLR CONSOLE APP

int main(array<System::String^>^ args)

{

	unsigned contor = 0; int div1 = 0;
	try
	{

		for (contor; contor < 5; contor++);
		{
			Console::WriteLine("Afisam {0}{1}", "variabila ", contor);

		}

		double div = contor / div1;
		Console::WriteLine(div);

	}

	catch (Exception^ exceptie)
	{
		Console::WriteLine("A fost gasita o exceptie" + exceptie->Message);

	}

	return 0;

}