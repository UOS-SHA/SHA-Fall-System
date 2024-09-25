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

#pragma once

#include <Windows.h>

// 명령어 핸들링 함수
// - 반환값:			명령의 exit code
// - 첫째 전달인자:	명령어의 전달인자
// - 둘째 전달인자:	명령어의 입력 핸들
// - 셋째 전달인자:	명령어의 출력 핸들
typedef DWORD(*COMMAND_HANDLER_PROC)(LPCWSTR[], HANDLE, HANDLE);

// 명령어 테이블 엔트리
// szCommandName:		명령어의 이름
// pCommandHandlerProc:	명령어의 핸들링 함수 주소
typedef struct __COMMAND_ENTRY
{
	LPCWSTR					szCommandName;
	COMMAND_HANDLER_PROC	pCommandHandlerProc;
}	COMMAND_ENTRY, *PCOMMAND_ENTRY;