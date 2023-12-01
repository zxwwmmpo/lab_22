#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("введите строку: ");
	fgets(s, 79, stdin);

	printf("\nвы ввели строку: \"%s\"", s);

	int i = 0;
	while (s[i] != '\0') {
		if (isspace(s[i])) {
			s[i] = '#';
		}
		i++;
	}

	printf("\nстрока псоле обработки: \"%s\"\n", s);

}