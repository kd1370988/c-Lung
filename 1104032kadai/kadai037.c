#include<stdio.h>
main()
{
	int a;
	printf("0から100までの整数？");
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("その数値の判定結果は「５」です");
	}
	else if (a >= 80)
	{
		printf("その数値の判定結果は「4」です");
	}
	else if (a >= 50)
	{
		printf("その数値の判定結果は「3」です");
	}
	else if (a >= 30)
	{
		printf("その数値の判定結果は「2」です");
	}
	else
	{
		printf("その数値の判定結果は「1」です");
	}
}