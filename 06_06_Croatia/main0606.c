#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char inputStr[101];		// 최대 100글자의 단어가 주어진다.
	int len;
	int charCount = 0;

	// 01. 입력
	scanf("%s", inputStr);

	len = strlen(inputStr);

	// 02. 문자배열을 루핑 돌면서 문자 묶음을 계산한다.
	for (int i = 0; i < len; i++)
	{	
		switch (inputStr[i])
		{
		case 'c':
			if ((i + 1) < len)		// 다음 문자가 = 또는 -인지 확인
			{
				if (inputStr[i + 1] == '='
					|| inputStr[i + 1] == '-')
				{
					i++;
				}
			}
			break;
		case 'd':
			if ((i + 1) < len)		// 다음 문자가 z, - 인지 체크
			{
				switch (inputStr[i + 1])
				{
				case 'z':
					//i++;
					if ((i + 2) < len)
					{
						if (inputStr[i + 2] == '=') {
							i+=2;
						}
					}
					break;
				case '-':
					i++;
					break;
				}
			}
			break;
		case 'l':
			if ((i + 1) < len)
			{
				if (inputStr[i+1] == 'j')
				{
					i++;
				}
			}
			break;
		case 'n':
			if ((i + 1) < len)
			{
				if (inputStr[i + 1] == 'j')
				{
					i++;
				}
			}
			break;
		case 's':
			if ((i + 1) < len)
			{
				if (inputStr[i + 1] == '=')
				{
					i++;
				}
			}
			break;
		case 'z':
			if ((i + 1) < len)
			{
				if (inputStr[i + 1] == '=')
				{
					i++;
				}
			}
			break;
		}

		charCount++;
	}

	// 03. 출력
	printf("%d", charCount);

	//system("pause");  //visual studio에서만

	return 0;
}