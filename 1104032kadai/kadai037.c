#include<stdio.h>
main()
{
	int a;
	printf("0����100�܂ł̐����H");
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else if (a >= 80)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (a >= 50)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (a >= 30)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else
	{
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}