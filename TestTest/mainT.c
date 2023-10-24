#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main() {
	int (*fp)(int, int);

	fp = add;

	printf("%d", fp(10, 20));

	system("pause");  //visual studio¿¡¼­¸¸

	return 0;
}