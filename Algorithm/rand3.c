#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 100 + 1;
	printf("%d\n", k);
	if (k <= 30) 
	{
		printf("クリティカル\n");
	}
	else
	{
		printf("通常攻撃\n");
	}
}