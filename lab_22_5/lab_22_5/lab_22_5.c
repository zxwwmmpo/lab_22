#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s);

	int i = 0;
	while (s[i] != '\0') {
		if (isspace(s[i])) {
			s[i] = '#';
		}
		i++;
	}

	printf("\n������ ����� ���������: \"%s\"\n", s);

}