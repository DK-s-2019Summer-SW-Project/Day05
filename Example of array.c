// �迭�� �⼮�� ����غ���
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define ATTENDANCE 5
int main()
{
	int student[ATTENDANCE] = { 0 };
	int i, average = 0;

	for (i = 0; i < ATTENDANCE; i++)
	{
		printf("insert the attandence pattespaited:1 appsence:0 ");
		scanf_s("%d", &student[i]);
		if (student[i] == 0)
		{
			average++;
		}
	}

	double ratio = average / 5.0;
	if (ratio > 0.3)
		printf("the attendance is (%f%%)", ratio*100.0);
	else
		printf("the attendence is well(%f%%)\n",ratio*100.0);
	
	return 0;
}

// �ϴ� ������ �⼮�� ��� �� ���ΰ�?
// �⼮ �ϼ��� ��� ���� �Ἦ�� ��� 
// �̰͸� ī��Ʈ �ؼ� ���
// �ܼ��ϰ� �����ؼ� 1�� 0�� �Է� �޾Ƽ� �� ��� ���� ����ϸ� �ȴ�. �׸��� ����� ���ϰ� �װͺ��� ������ ���� �ϼ� �����̶�� ���ϸ� �ȴ�.
// ������ ������ ������ ����, �Է��� �޴� ����, �׸��� ����� ���ϴ� ����, �̷��� 3���� �ʿ�
