// �л����� ������ �Է� �޾Ƽ� �� ����� �����ϴ� ���α׷� --> �л� ���� 10��!
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
