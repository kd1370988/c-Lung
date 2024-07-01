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
			printf("Aさん：あたりの数は？ー＞");
			scanf("%d", &user);
		}
		if (i % 2 == 0)
		{
			printf("Bさん：あたりの数は？ー＞");
			scanf("%d", &user);
		}
		if (i % 2 == 1)
		{
			if (user == atari1)
			{
				printf("正解！%d回でAさんの勝ち\n",j);
				break;
			}
			else if (atari1 < user)
			{
				printf("あたりの数より大きいです。\n\n");
			}
			else
			{
				printf("あたりの数より小さいです。\n\n");
			}
		}
		else
		{
			if (user == atari2)
			{
				printf("正解！%d回でBさんの勝ち\n",k);
				break;
			}
			else if (atari2 < user)
			{
				printf("あたりの数より大きいです。\n\n");
			}
			else
			{
				printf("あたりの数より小さいです。\n\n");
			}
		}
		i++;
		j++;
		k++;
	}
}