#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>


//int latin(int c) {
//	if (c = 89) {
//		return 1;
//	}
//	return 0;
//}

//������� 4

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������: \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o') {
			s[i] = '@';
		}
	}

	printf("\n������ ����� ���������: \"%s\"", s);
}