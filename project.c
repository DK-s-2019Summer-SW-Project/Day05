//��ǻ�Ϳͻ���ڰ� �ѹ��� ������ ���鼭 ���ڸ� �Է��Ͽ� ���ʷ� 100�� �ѱ�� �¸��ϴ� ���� �����
// ��ǻ�Ϳ� ����ڰ� �Է��� ���ڴ� 1~10���� ������ �ϸ� �ѹ� �Է��� ���ڴ� �ٽ� ��� �� �� ������ ����. ��ǻ�Ͱ� ���� �Է��� �����Ѵ�.
// �ڽ��� ���ʰ� �Ծ��� �� 100�̻��̸� �¸�, �ѹ� ����� ���ڸ� Ȯ���ϴ� �۾��� �ʿ��ϴ�. 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
#include<stdlib.h> // ������ ����ϱ� ���� �迭
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


	


//������� �Է� ���� �ʿ�, for���� ���� ������ �ʿ�, ������ ǥ���ϴ� ���� �ʿ�, 
//�迭�� �̿��Ͽ� computer�� ���� ��� �Ѵ�. ���� user�� ���� ��쵵 �迭�� �̿��Ͽ� ���
// ���� ����� ��� ���� ����ϴ� �� 100�̻��̸� ��� �ǰ� �Ѵ�.
// Ʋ�� do -while������ ����� ���� ����� for���� ���
//computer�� ���� ���� �̾Ƴ��� ���� rand�Լ� �̿� �� ���� ������ ���� �ߺ��� ���� �Ѵ�.