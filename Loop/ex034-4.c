#include<stdio.h>
main()
{
	int su, i, j, ia, ib;
	printf("”‚ÍH");
	scanf("%d", &su);
	i = su;
	j = 1;
	do
	{
		ia = su-1;
		
		while (ia >= j)
		{
			printf(" ");
			ia--;
		} 
		ib = 1;
		do
		{
			printf("*");
			ib = ib + 1;
		} while (ib <= j);
		printf("\n");
		j = j + 1;
		i = i - 1;
	} while (i >= 1);

}