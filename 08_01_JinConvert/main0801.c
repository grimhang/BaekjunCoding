#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int bJin;
	char N[50];

	//01. 입력값
	scanf("%s %d", N, &bJin);

	//02.숫자N은 문자열로 받으므로 전체 자리수 체크해서 CHAR로 파싱

	//03. 공식은 ZYWV 36이면
	// (Z x 36³) + (Y x 36²) + (W x 36¹ + V
	// char가 숫자이면 그대로이고 A~Z면 25를 뺀다)
	
	//04. 값을 출력한다.
	printf("%s %d", N, bJin);

	system("pause");  //visual studio에서만

	return 0;
}