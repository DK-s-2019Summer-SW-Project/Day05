#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 5 // 5개의 배열을 선언한다.
int main()
{
	int i;
	int score[SIZE]; // 크기가 10인 정수형 배열을 선언한다.
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;

	for (i = 0; i < SIZE; i++)// for문을 사용하여 입력문을 출력 한다.
	{
		printf("The socre[%d] = %d\n", i, score[i]);// score[i]가 나온 이유는 무엇인가? --> i가 순차적으로 떨어지므로 score[i]로 선언을 해야 한다.
	}
	return 0;
}
