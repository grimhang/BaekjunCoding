#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
	// 1. 2���� �迭 2���� ����� ���� �Է��� �޴´�.
	int row, col;

	scanf("%d %d", &row, &col);

	// 2. �迭2���� �����޸𸮸� �Ҵ��ϰ� 0���� �����Ѵ�.
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
	

	// 3. �迭2���� ��� ���� �Է�
	for (int i = 0; i < row; i++)	// ù��° ���
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for (int i = 0; i < row; i++)	// ù��° ���
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	// 4. ���2���� ���� ���� ��� �� ���ϱ�
	for (int i = 0; i < row; i++)	// ù��° ���
	{
		for (int j = 0; j < col; j++)
		{
			arrTotal[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	// 4. �迭2���� ���� ����غ���.
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

	// 5. ����
	for (int i = 0; i < row; i++)
	{
		free(arr1[i]);
		free(arr2[i]);
		free(arrTotal[i]);
	}

	free(arr1);
	free(arr2);
	free(arrTotal);

	//system("pause");  //visual studio������

	return 0;
}