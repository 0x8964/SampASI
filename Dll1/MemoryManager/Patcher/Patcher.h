#pragma once
#include <Windows.h>

/*
	destinationAddress - ����� ��� ��������� �������
	newProtect - ����� ����� ������� �����?
	bytesCount - �� ������� ���� ���������������� ���������
*/
void setAddressProtection(DWORD destinationAddress, DWORD newProtect, unsigned int bytesCount);

/*
	��������������� ����� ������� ����� ���������� ������ setAddressProtection.
	�������� setAddressProtection. oldProtect ����� ���������� ����� �����.
	destinationAddress - ����� ��� ��������� �������
	bytesCount - �� ������� ���� ���������������� ���������
*/
void restoreLastProtection(DWORD destinationAddress, unsigned int bytesCount);

/*
	���������� ��������� ������ ������� ������ �� �����!!!
	sourceAddress - ������ ����� �����
	count - ���������� ���� ��� ������
*/
char* getBytes(DWORD sourceAddress, unsigned int count);

/*
	destinationAddress - ����� ��� ����� ����
	newBytes - ����� �����
	size - ���������� ���� ��� �����(������ newBytes)
*/
void patchBytes(DWORD destinationAddress, const char newBytes[], unsigned int size);

/*
	destinationAddress - ����� ��� ����� ����
	newValue - ����� �������� ���������
*/
void patchPointer(DWORD destinationAddress, DWORD newValue);