// 학생들의 성적을 입력 받아서 그 평균을 산출하는 프로그램 --> 학생 수는 10명!
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define STUDENT 10
int main()
{
	int score[STUDENT];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENT; i++)
	{
		printf("insert the grade: ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	average = sum / STUDENT;
	printf("the average is %d\n", average);

	return 0;
}
