#include<stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("整数３つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値 = %d 最小値 = %d\n", max, min);
}
void maxmin(int a, int b, int c, int* max, int* min)
{
	*max = a;
	*min = a;
	if (*max < b)
	{
		*max = b;
	}
	if (*max < c)
	{
		*max = c;
	}
	if (*min > b)
	{
		*min = b;
	}
	if (*min > c)
	{
		*min = c;
	}
	return;
}