/*
* Project:	SHA-Fall-System
* File:		main.c
* 
* Contributers:
* - 신승리
* 
* Date:
* Created:			Sep 25, 2024
* Last modified:	Sep 25, 2024
*/

#include "../inc/commands.h"
#include <stdio.h>
#include <locale.h>

// 프로그램의 entrypoint
int wmain(void)
{	
	wchar_t str[] = L"Hello_world";
	wprintf(L"%s", str);
}