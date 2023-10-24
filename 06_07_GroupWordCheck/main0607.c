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

	//2. 계산
	for (int i = 0; i < inputNum; i++)
	{
		int len = strlen(words[i]);
		memset(conArr, 0, sizeof(conArr));

		for (int j = 0; j < len; j++)
		{
			//printf("%c\n", words[i][j]);
			int c1 = words[i][j] - 97;

			if (j == 0) //첫번째는 ㅁ무조건 첫발견
			{
				conArr[c1] = 1;
			}
			else
			{
				if (conArr[c1] == 0)	// 처음 발견되고 
				{
					conArr[c1] = 1;					
				}
				else // 처음 발견이 아니면
				{
					if (words[i][j - 1] == words[i][j])   // 이전문자도 같은 문자면
					{
						conArr[c1] = 1;
					}
					else
					{
						conArr[c1] = 2;	//그룹문자 아님
						break;
					}
				}
			}
		}

		int innerResult = 1;
		// 결과에서 2번이 나오면 제외
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


	//3. 출력
	/*for (int i = 0; i < inputNum; i++)
	{
		int len = strlen(words[i]);
		printf("%s : %d\n", words[i], len);
	}*/

	printf("%d", finalResult);

	//4. 메모리 해제
	for (int i = 0; i < inputNum; i++)
	{
		free(words[i]);
	}

	free(words);
	

	//system("pause");  //visual studio에서만

	return 0;
}