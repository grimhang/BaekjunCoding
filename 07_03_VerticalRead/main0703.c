#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char strArr[5][16] = {'\0'};	// ���ٿ� �ִ� 15���̴ϱ� null���ڿ����� ������ 16��

	//01. 2x2 char �迭�� �Է¹޴´�
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", &strArr[i]);
	}

	for (int col = 0; col < 15; col++)	// ���ٿ� �ִ� 15�ڱ����̴ϱ�
	{
		for (int row = 0; row < 5; row++)	// �ִ� 5���̴ϱ�
		{
			if (strArr[row][col] != '\0')	// null���ڿ��� ��� ����
			{
				printf("%c", strArr[row][col]);
			}			
		}		
	}

	//04. ���� ����Ѵ�.
	/*for (int i = 0; i < 5; i++)
	{
		printf("%s\n", strArr[i]);
	}*/
	//system("pause");  //visual studio������

	return 0;
}