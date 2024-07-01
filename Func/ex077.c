#include<stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("®”‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("Å‘å’l = %d Å¬’l = %d\n", max, min);
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