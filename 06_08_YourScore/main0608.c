#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct ScoreStruct {
	char tilte[51];
	float hakjum;
	char score[3];
};

int main() {
	// 01. ����ü�� �̿��� ������ �Է¹޴´�.
	struct ScoreStruct myScores[20];
	float gradeScore;
	float totalScore = 0.0f;
	int titleCount = 0;
	float totalHakjum = 0.0f;

	
	for (int i = 0; i < 20; i++)
	{
		scanf("%s %f %s", myScores[i].tilte, &myScores[i].hakjum, myScores[i].score);

		

		//printf("  %s %s %f\n", myScores[i].tilte, myScores[i].score, gradeScore);
	}

	// 02. ���
	for (int i = 0; i < 20; i++)
	{
		if (strcmp(myScores[i].score, "P") != 0)  // ������ P �����Ѵ�.
		{
			// ���������� ���� ���������� ����Ѵ�
			if (strcmp(myScores[i].score, "A+") == 0)
				gradeScore = 4.5f;
			else if (strcmp(myScores[i].score, "A0") == 0)
				gradeScore = 4.0f;
			else if (strcmp(myScores[i].score, "B+") == 0)
				gradeScore = 3.5f;
			else if (strcmp(myScores[i].score, "B0") == 0)
				gradeScore = 3.0f;
			else if (strcmp(myScores[i].score, "C+") == 0)
				gradeScore = 2.5f;
			else if (strcmp(myScores[i].score, "C0") == 0)
				gradeScore = 2.0f;
			else if (strcmp(myScores[i].score, "D+") == 0)
				gradeScore = 1.5f;
			else if (strcmp(myScores[i].score, "D0") == 0)
				gradeScore = 1.0f;
			else if (strcmp(myScores[i].score, "F") == 0)
				gradeScore = 0.0f;

			totalScore += myScores[i].hakjum * gradeScore;
			totalHakjum += myScores[i].hakjum;
			titleCount++;
		}
	}

	printf("%f", totalScore / totalHakjum);

	// �Է¹��� ������ ����Ѵ�.
	//printf("\n");
	//for (int i = 0; i < 20; i++)
	//{
	//	if (strcmp(myScores[i].score, "P") != 0 && strcmp(myScores[i].score, "F") != 0)  // ������ P�� F�� �����Ѵ�.
	//	{
	//		printf("%s %f %s\n", myScores[i].tilte, myScores[i].hakjum, myScores[i].score);
	//	}

	//}

	//system("pause");  //visual studio������

	return 0;
}