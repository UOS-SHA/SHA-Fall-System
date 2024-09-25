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

#pragma once

#include <Windows.h>

// Command handling function
// - Returns:		Exit code of the command
// - First param:	The argument of the command
// - Second param:	The input HANDLE of the command
// - Third param:	The output HANDLE of the command
typedef DWORD(*COMMAND_HANDLER_PROC)(LPCWSTR[], HANDLE, HANDLE);

// Command table entry
// szCommandName:		The name of the command
// pCommandHandlerProc:	The address of the handler function
typedef struct __COMMAND_ENTRY
{
	LPCWSTR					szCommandName;
	COMMAND_HANDLER_PROC	pCommandHandlerProc;
}	COMMAND_ENTRY, *PCOMMAND_ENTRY;