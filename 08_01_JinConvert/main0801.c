#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int bJin;
	char N[50];

	//01. �Է°�
	scanf("%s %d", N, &bJin);

	//02.����N�� ���ڿ��� �����Ƿ� ��ü �ڸ��� üũ�ؼ� CHAR�� �Ľ�

	//03. ������ ZYWV 36�̸�
	// (Z x 36��) + (Y x 36��) + (W x 36�� + V
	// char�� �����̸� �״���̰� A~Z�� 25�� ����)
	
	//04. ���� ����Ѵ�.
	printf("%s %d", N, bJin);

	system("pause");  //visual studio������

	return 0;
}