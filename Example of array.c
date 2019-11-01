// 배열에 출석을 기록해보자
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

// 일단 몇일을 출석에 기록 할 것인가?
// 출석 일석을 기록 또한 결석을 기록 
// 이것를 카운트 해서 출력
// 단순하게 생각해서 1과 0을 입력 받아서 그 결과 값을 계산하면 된다. 그리고 평균을 정하고 그것보다 낮으면 수업 일수 부족이라고 말하면 된다.
// 변수는 루프를 돌리는 변수, 입력을 받는 변수, 그리고 평균을 구하는 변수, 이렇게 3개가 필요
