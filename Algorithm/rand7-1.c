#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int atari1,atari2,user, i,j,k;
	srand(time(0));
	rand();
	atari1 = rand() % 1000 + 1;
	atari2 = rand() % 1000 + 1;
	i = 1;
	j = 1;
	k = 1;
	while (1)
	{
		if (i % 2 == 1)
		{
			printf("A����F������̐��́H�[��");
			scanf("%d", &user);
		}
		if (i % 2 == 0)
		{
			printf("B����F������̐��́H�[��");
			scanf("%d", &user);
		}
		if (i % 2 == 1)
		{
			if (user == atari1)
			{
				printf("�����I%d���A����̏���\n",j);
				break;
			}
			else if (atari1 < user)
			{
				printf("������̐����傫���ł��B\n\n");
			}
			else
			{
				printf("������̐���菬�����ł��B\n\n");
			}
		}
		else
		{
			if (user == atari2)
			{
				printf("�����I%d���B����̏���\n",k);
				break;
			}
			else if (atari2 < user)
			{
				printf("������̐����傫���ł��B\n\n");
			}
			else
			{
				printf("������̐���菬�����ł��B\n\n");
			}
		}
		i++;
		j++;
		k++;
	}
}