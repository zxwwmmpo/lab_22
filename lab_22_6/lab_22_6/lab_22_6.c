#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>


int isdigit_my(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	return 0;
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i])) { s[i] = '$'; }
	}

	printf("\n������ ����� isdigit: \"%s\"\n", s);


	char s1[80];
	printf("������� ������: ");
	fgets(s1, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s1);


	for (int i = 0; s1[i] != '\0'; i++) {
		if (isdigit_my(s1[i])) {
			s1[i] = '$';
		}
	}

	printf("������ ����� isdigit_my: \"%s\"", s1);
}