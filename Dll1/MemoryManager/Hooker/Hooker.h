#pragma once
#include "..\Patcher\Patcher.h"

/*
	������������� jmp (hookAddress-destinationAddress+5) �� ����� ����������, ������ ����� ���.
	���������� ������������ �����
	hookAddress - ����� ��� ������ ������� ������ - jmp destionationAddress
	������ ������!!!
*/
char* setHook(DWORD hookAddress, DWORD destinationAddress);

DWORD getAddressToOriginalCode(DWORD hookAddress);

DWORD setNewPointer(DWORD address, DWORD newValue);