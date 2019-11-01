//컴퓨터와사용자가 한번씩 번갈아 가면서 숫자를 입력하여 최초로 100을 넘기면 승리하는 게임 만들기
// 컴퓨터와 사용자가 입력할 숫자는 1~10으로 제한을 하며 한번 입력한 숫자는 다시 사용 할 수 없도록 제한. 컴퓨터가 먼저 입력을 실행한다.
// 자신의 차례가 왔었을 때 100이상이면 승리, 한번 사용한 숫자를 확인하는 작업이 필요하다. 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#include<stdlib.h> // 난수를 사용하기 위한 배열
#include<time.h>

int main()
{
	int user[10] = { 0 };
	int computer[10] = { 0 };
	int total = 0, i, j;

	do
	{
		if (total >= 100)
		{
			for (i = 0; i < 10; i++)
			{

				printf("insert of the user: ");
				scanf_s("%d", &user[i]);
				total = total + user;
				if (total >= 100)
				{
					printf("the user is winner!\n");
					break;
				}
				else
				{
					printf("insert of the computer: %d", computer[i]);
					if (total > 100)
					{
						printf("the computer wins!\n");
						break;
					}
				}
				printf("the total is%d", total);
			}
			if (total >= 100)
				break;
			else
				continue;
		}
		else
		{
			printf("the gane is over\n");
			break;
		}
		
	} while (total >= 100);

	return 0;
}


	


//사용자의 입력 변수 필요, for문을 돌릴 변수가 필요, 총합을 표현하는 변수 필요, 
//배열을 이용하여 computer의 수를 출력 한다. 또한 user의 값의 경우도 배열을 이용하여 출력
// 승자 출력의 경우 합을 계산하던 중 100이상이면 출력 되게 한다.
// 틀은 do -while문으로 만들고 범위 계산은 for문을 사용
//computer의 랜덤 수를 뽑아내는 것은 rand함수 이용 및 선택 정렬을 통해 중복을 방지 한다.