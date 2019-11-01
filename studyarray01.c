// Print out a~z

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#define SIZE 26
int main()
{
	int i;
	char code[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		code[i] = 'A' + i; // 이렇게 선언을 하면 순차적으로 알파벳이 넘어간다. ---> 이렇게 갈 수 있는 이유는 글자의 순서가 정해져있기 때문이다. 예를 들어 배열의 크기를 300정도로 설정 할 경우 정렬된 글자들의 순서 나열을 알 수 있다.
		// 만약 특정 문자의 집합, 예를 들면 모음, 자음의 집합을 원할 경우 배열안에 값을 일일이 입력을 하고 루프를 돌려야 원하는 값의 출력이 발생하게 된다.
		printf(" %c", code[i]);
	}
	printf(" \n");

	return 0;
}
