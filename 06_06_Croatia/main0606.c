#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char inputStr[101];		// �ִ� 100������ �ܾ �־�����.
	int len;
	int charCount = 0;

	// 01. �Է�
	scanf("%s", inputStr);

	len = strlen(inputStr);

	// 02. ���ڹ迭�� ���� ���鼭 ���� ������ ����Ѵ�.
	for (int i = 0; i < len; i++)
	{	
		switch (inputStr[i])
		{
		case 'c':
			if ((i + 1) < len)		// ���� ���ڰ� = �Ǵ� -���� Ȯ��
			{
				if (inputStr[i + 1] == '='
					|| inputStr[i + 1] == '-')
				{
					i++;
				}
			}
			break;
		case 'd':
			if ((i + 1) < len)		// ���� ���ڰ� z, - ���� üũ
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

	// 03. ���
	printf("%d", charCount);

	//system("pause");  //visual studio������

	return 0;
}