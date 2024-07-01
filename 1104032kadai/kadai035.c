#include<stdio.h>
main()
{
	int  a;
	printf("整数？");
	scanf("%d", &a);
	if(a <0)
	{
		printf("入力値は「マイナス」です");
	}
	else if(a == 0)
	{
		printf("入力値は「０」です");
	}
	else 
	{
		printf("入力値は「プラス」です");
	}
}