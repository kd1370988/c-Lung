#include<stdio.h>
main()
{
	int a,i, c[256];
	i = 0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &a);
		if (a == -999)break;
		c[i]=a;
		i++;
	}
	printf("”z—ñc = ");
	while (i > 0)
	{
		i--;
		printf("%d  ", c[i]);
	}
	printf("\n");
}