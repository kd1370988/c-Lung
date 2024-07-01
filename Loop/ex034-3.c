#include<stdio.h>
main()
{
	int i, j,ia;
	printf("”‚ÍH");
	scanf("%d", &i);
	j = 1; 
	do 
	{
		ia = 1;
		do 
		{
			printf("*");
			ia++;
		} while (ia <= j);
		printf("\n");
		j++;
		i--;
	} while (i >= 1);
}