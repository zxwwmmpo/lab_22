#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>


int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') { new_c = 'A' + (c - 'a'); }
	if (c >= '�' && c <= '�') { new_c = '�' + (c - '�'); }
	if (c >= '�' && c <= '�') { new_c = '�' + (c - '�'); }
	if (c == '�') { new_c = '�'; }
	return new_c;
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}

	printf("\n������ ����� toupper: \"%s\"\n", s);


	char s1[80];
	printf("������� ������: ");
	fgets(s1, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s1);


	for (int i = 0; s1[i] != '\0'; i++) {
		s1[i] = toUpperAll(s1[i]);
	}

	printf("������ ����� toupperall: \"%s\"", s1);
}