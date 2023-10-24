#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int counter;
	scanf("%d", &input);
	counter = 1;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (counter < input)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			
			counter++;
		}		
		counter = 1;
		printf("\n");
	}
	

	system("pause");

	return 0;
}