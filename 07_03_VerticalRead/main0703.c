#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char strArr[5][16] = {'\0'};	// 한줄에 최대 15자이니까 null문자열까지 포함해 16자

	//01. 2x2 char 배열을 입력받는다
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", &strArr[i]);
	}

	for (int col = 0; col < 15; col++)	// 한줄에 최대 15자까지이니까
	{
		for (int row = 0; row < 5; row++)	// 최대 5줄이니까
		{
			if (strArr[row][col] != '\0')	// null문자열은 출력 안함
			{
				printf("%c", strArr[row][col]);
			}			
		}		
	}

	//04. 값을 출력한다.
	/*for (int i = 0; i < 5; i++)
	{
		printf("%s\n", strArr[i]);
	}*/
	//system("pause");  //visual studio에서만

	return 0;
}