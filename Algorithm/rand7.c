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
		printf("あたりの数は？ー＞");
		scanf("%d", &user);
		if (user == atari)
		{
			printf("正解！%d回目で当たりました\n", i);
			break;
		}
		else if(atari < user)
		{
			printf("あたりの数より大きいです。\n");
		}
		else
		{
			printf("あたりの数より小さいです。\n");
		}
		i++;
	}
}