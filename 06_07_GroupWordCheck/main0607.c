#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
	int inputNum;
	int finalResult = 0;
	char conArr[26];

	scanf("%d", &inputNum);

	char** words = malloc(sizeof(char*) * inputNum);


	for (int i = 0; i < inputNum; i++)
	{
		words[i] = malloc(101);
	}

	for (int i = 0; i < inputNum; i++)
	{
		scanf("%s", words[i]);
	}

	//2. ���
	for (int i = 0; i < inputNum; i++)
	{
		int len = strlen(words[i]);
		memset(conArr, 0, sizeof(conArr));

		for (int j = 0; j < len; j++)
		{
			//printf("%c\n", words[i][j]);
			int c1 = words[i][j] - 97;

			if (j == 0) //ù��°�� �������� ù�߰�
			{
				conArr[c1] = 1;
			}
			else
			{
				if (conArr[c1] == 0)	// ó�� �߰ߵǰ� 
				{
					conArr[c1] = 1;					
				}
				else // ó�� �߰��� �ƴϸ�
				{
					if (words[i][j - 1] == words[i][j])   // �������ڵ� ���� ���ڸ�
					{
						conArr[c1] = 1;
					}
					else
					{
						conArr[c1] = 2;	//�׷칮�� �ƴ�
						break;
					}
				}
			}
		}

		int innerResult = 1;
		// ������� 2���� ������ ����
		for (int k = 0; k < 26; k++)
		{
			if (conArr[k] == 2)
			{
				innerResult = 0;
				break;
			}
			else
			{
				innerResult = 1;
			}			
		}

		if (innerResult == 1)
		{
			finalResult++;
		}
		//printf("----------\n");
	}


	//3. ���
	/*for (int i = 0; i < inputNum; i++)
	{
		int len = strlen(words[i]);
		printf("%s : %d\n", words[i], len);
	}*/

	printf("%d", finalResult);

	//4. �޸� ����
	for (int i = 0; i < inputNum; i++)
	{
		free(words[i]);
	}

	free(words);
	

	//system("pause");  //visual studio������

	return 0;
}