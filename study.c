//Example of the static variance

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int total = 0;

int AddTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}
int main()
{
	int num, i;
	for (i = 0; i < 9; i++)
	{
		printf("insert%d: ",i+1);
		scanf_s("%d", &num);
		printf("´©Àû: %d\n",AddTotal(num));
		
	}
	return 0;
}
