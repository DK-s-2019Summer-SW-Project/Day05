#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 5 // 5���� �迭�� �����Ѵ�.
int main()
{
	int i;
	int score[SIZE]; // ũ�Ⱑ 10�� ������ �迭�� �����Ѵ�.
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;

	for (i = 0; i < SIZE; i++)// for���� ����Ͽ� �Է¹��� ��� �Ѵ�.
	{
		printf("The socre[%d] = %d\n", i, score[i]);// score[i]�� ���� ������ �����ΰ�? --> i�� ���������� �������Ƿ� score[i]�� ������ �ؾ� �Ѵ�.
	}
	return 0;
}
