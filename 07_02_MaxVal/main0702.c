#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 01. 9x9행렬판에 해당하는 2차원 배열 만들기
	int arr[9][9];
	int maxRow, maxCol, maxVal = -1;

	// 02. 입력받는다
	for (int i = 0; i < 9; i++)
	{
		/*scanf("%d %d %d %d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4],
			&arr[i][5], &arr[i][6], &arr[i][7], &arr[i][8]);*/
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}

	}

	// 03. 계산
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (maxVal < arr[i][j])
			{
				maxVal = arr[i][j];
				maxRow = i + 1;
				maxCol = j + 1;
			}
		}
	}

	//04. 값을 프린트한다.
	/*
	for (int i = 0; i < 9; i++)
	{
		printf("%d %d %d %d %d %d %d %d %d", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4],
			arr[i][5], arr[i][6], arr[i][7], arr[i][8]);
		printf("\n");
	}
	*/

	printf("%d\n", maxVal);
	printf("%d %d", maxRow, maxCol);

	system("pause");  //visual studio에서만

	return 0;
}