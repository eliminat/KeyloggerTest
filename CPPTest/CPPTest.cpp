// CPPTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include "KeyConstants.h"
#include "Helper.h"
#include "BASE64.h"
#include "IO.h"


using namespace std;



int main()
{
	MSG Msg;

	while(GetMessage(&Msg, NULL, 0, 0))
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}


    return 0;
}

