#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("введите строку: ");
	fgets(s, 79, stdin);

	printf("\nвы ввели строку: %s", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') { cnt++; }
	}

	printf("\nкол-во пробелов в ней: %d", cnt);
}