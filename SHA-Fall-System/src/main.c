/*
* Project:	SHA-Fall-System
* File:		main.c
* 
* Contributers:
* - Nascity
* 
* Date:
* Created:			Sep 25, 2024
* Last modified:	Sep 25, 2024
*/

#include "../inc/commands.h"
#include <locale.h>

// 프로그램의 entrypoint
int wmain(void)
{
	HANDLE	hStdIn, hStdOut;

	_wsetlocale(LC_ALL, L"Korean");

	hStdIn = GetStdHandle(STD_INPUT_HANDLE);
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);


}