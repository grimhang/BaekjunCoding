#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
	// 1. 2차원 배열 2개를 만들기 위해 입력을 받는다.
	int row, col;

	scanf("%d %d", &row, &col);

	// 2. 배열2개의 동적메모리를 할당하고 0으로 세팅한다.
	int** arr1 = malloc(sizeof(int*) * row);
	int** arr2 = malloc(sizeof(int*) * row);
	int** arrTotal = malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
	{
		arr1[i] = malloc(sizeof(int) * col);
		memset(arr1[i], 0, sizeof(int) * col);

		arr2[i] = malloc(sizeof(int) * col);
		memset(arr2[i], 0, sizeof(int) * col);

		arrTotal[i] = malloc(sizeof(int) * col);
		memset(arr2[i], 0, sizeof(int) * col);
	}
	

	// 3. 배열2개의 행렬 값을 입력
	for (int i = 0; i < row; i++)	// 첫번째 행렬
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for (int i = 0; i < row; i++)	// 첫번째 행렬
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	// 4. 행렬2개를 더해 최종 행렬 값 구하기
	for (int i = 0; i < row; i++)	// 첫번째 행렬
	{
		for (int j = 0; j < col; j++)
		{
			arrTotal[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	// 4. 배열2개의 값을 출력해본다.
	/*
	for (int i = 0; i < row; i++)
	{
		//printf("%p\n", pRow[i]);
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++)
	{
		//printf("%p\n", pRow[i]);
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	*/
	
	for (int i = 0; i < row; i++)
	{
		//printf("%p\n", pRow[i]);
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arrTotal[i][j]);
		}
		printf("\n");
	}

	// 5. 해제
	for (int i = 0; i < row; i++)
	{
		free(arr1[i]);
		free(arr2[i]);
		free(arrTotal[i]);
	}

	free(arr1);
	free(arr2);
	free(arrTotal);

	//system("pause");  //visual studio에서만

	return 0;
}