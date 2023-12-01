#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>


int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') { new_c = 'A' + (c - 'a'); }
	if (c >= 'а' && c <= 'п') { new_c = 'А' + (c - 'а'); }
	if (c >= 'р' && c <= 'я') { new_c = 'Р' + (c - 'р'); }
	if (c == 'ё') { new_c = 'Ё'; }
	return new_c;
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("введите строку: ");
	fgets(s, 79, stdin);

	printf("\nвы ввели строку: \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}

	printf("\nстрока после toupper: \"%s\"\n", s);


	char s1[80];
	printf("введите строку: ");
	fgets(s1, 79, stdin);

	printf("\nвы ввели строку: \"%s\"", s1);


	for (int i = 0; s1[i] != '\0'; i++) {
		s1[i] = toUpperAll(s1[i]);
	}

	printf("строка после toupperall: \"%s\"", s1);
}