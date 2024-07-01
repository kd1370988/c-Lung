#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int user,cpu;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー＞");
	scanf("%d", &user);
	srand(time(0));
	rand();
	cpu = rand() % 3;
	user--;
	if (user >= 0 && user <= 2)
	{
		if (user == 0) printf("プレイヤーはグーです。\n");
		if (user == 1) printf("プレイヤーはチョキです。\n");
		if (user == 2) printf("プレイヤーはパーです。\n");

		if (cpu == 0) printf("コンピューターはグーです。\n");
		if (cpu == 1) printf("コンピューターはチョキです。\n");
		if (cpu == 2) printf("コンピューターはパーです。\n");

		if (user == cpu)
		{
			printf("あいこです。\n");
		}
		if (user == 0)
		{
			if (cpu == 1)printf("プレイヤーの勝ちです。\n");
			if (cpu == 2)printf("コンピューターの勝ちです。\n");
		}
		if (user == 1)
		{
			if (cpu == 2)printf("プレイヤーの勝ちです。\n");
			if (cpu == 0)printf("コンピューターの勝ちです。\n");
		}
		if (user == 2)
		{
			if (cpu == 0)printf("プレイヤーの勝ちです。\n");
			if (cpu == 1)printf("コンピューターの勝ちです。\n");
		}
	}
	else
	{
		printf("エラーです。\n");
	}
}