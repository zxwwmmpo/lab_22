#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("גגוהטעו סטלגמכ: ");
	int ch = getchar();

	for (int c = ch; c > ch - 30; c--) {
		printf("'%c' (%d)\n", c, c);
	}
	printf("\n\n\n");
}