#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int atari,user, i;
	srand(time(0));
	rand();
	atari = rand() % 1000 + 1;
	i = 1;
	while (1)
	{
		printf("������̐��́H�[��");
		scanf("%d", &user);
		if (user == atari)
		{
			printf("�����I%d��ڂœ�����܂���\n", i);
			break;
		}
		else if(atari < user)
		{
			printf("������̐����傫���ł��B\n");
		}
		else
		{
			printf("������̐���菬�����ł��B\n");
		}
		i++;
	}
}