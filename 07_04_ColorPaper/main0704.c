#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int totalArr[100][100] = { 0, };
	int sum = 0;

	//01. 입력값
	int inputLine;
	scanf("%d", &inputLine);

	int** arr = malloc(sizeof(int*) * inputLine);

	for (int i = 0; i < inputLine; i++)
	{
		arr[i] = malloc(sizeof(int) * 2);
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	//03.색을 칠한다
	for (int i = 0; i < inputLine; i++)
	{
		int x = arr[i][0] - 1;
		int y = arr[i][1] - 1;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				totalArr[j][k] = 1;
			}
		}
	}

	//04. 값을 출력한다.
	/*printf("\n");
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", i + 1);

		for (int j = 0; j < 100; j++)
		{
			printf("%d", totalArr[i][j]);
		}
		printf("\n");
	}*/

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (totalArr[i][j] == 1)
			{
				sum++;
			}
			//printf("%d", totalArr[i][j]);
		}		
	}

	printf("%d", sum);	

	//05. 메모리 해제
	for (int i = 0; i < inputLine; i++)
	{
		free(arr[i]);
	}
	free(arr);

	//system("pause");  //visual studio에서만

	return 0;
}