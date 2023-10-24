#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>

int main()
{
	int input;
	//int counter;
	scanf("%d", &input);
	//counter = input - 1;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if ((input - i - 1) > j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}

		for (int k = 0; k < i; k++)
		{
			printf("*");
		}

		/*for (int k = 0; k < input - i; k++)
		{
			if ((input - i - 1) > k)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}*/
		//rowCounter--;

		//counter--;
		printf("\n");
	}

	for (int i = 0; i < input - 1; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (j <= i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}

		for (int k = 0; k < input - i - 2; k++)
		{
			printf("*");
		}

		//printf("*");
		printf("\n");
	}

	system("pause");

	return 0;
}