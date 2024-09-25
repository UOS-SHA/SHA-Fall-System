/*
* Project:	SHA-Fall-System
* File:		main.c
*
* Contributers:
* - �Ž¸�
*
* Date:
* Created:			Sep 25, 2024
* Last modified:	Sep 25, 2024
*/

#pragma once

#include <Windows.h>

// ��ɾ� �ڵ鸵 �Լ�
// - ��ȯ��:			����� exit code
// - ù° ��������:	��ɾ��� ��������
// - ��° ��������:	��ɾ��� �Է� �ڵ�
// - ��° ��������:	��ɾ��� ��� �ڵ�
typedef DWORD(*COMMAND_HANDLER_PROC)(LPCWSTR[], HANDLE, HANDLE);

// ��ɾ� ���̺� ��Ʈ��
// szCommandName:		��ɾ��� �̸�
// pCommandHandlerProc:	��ɾ��� �ڵ鸵 �Լ� �ּ�
typedef struct __COMMAND_ENTRY
{
	LPCWSTR					szCommandName;
	COMMAND_HANDLER_PROC	pCommandHandlerProc;
}	COMMAND_ENTRY, *PCOMMAND_ENTRY;