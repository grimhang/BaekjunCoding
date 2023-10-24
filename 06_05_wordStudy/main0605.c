#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	char countArr[26] = { 0, };
	char maxCount = 0;
	int maxPos = 0;
	char temp;

	scanf("%s", str);

	int strLength = (int)strlen(str);
	int countArrSize = sizeof(countArr);

	// A���� Z���� ī���� ����
	for (int i = 0; i < strLength; i++)
	{
		temp = str[i] >= 97 ? str[i] - 32 : str[i];		
		countArr[temp - 65]++;
	}

	/*str[0] = 'A' +32;
	str[1] = '\0';*/	

	//max�� ã��
	for (int i = 0; i < countArrSize; i++)
	{
		if (countArr[i] > maxCount) {
			maxCount = countArr[i];
			maxPos = i;
		}
	}

	//max���� 2�� �̻� �������� üũ
	int countTwice = 0;
	for (int i = 0; i < countArrSize; i++)
	{
		if (countArr[i] == maxCount)
		{
			countTwice++;
		}
	}

	printf("%c", countTwice > 1 ? '?' : 'A' + maxPos);

	//system("pause");  //visual studio������

	return 0;
}