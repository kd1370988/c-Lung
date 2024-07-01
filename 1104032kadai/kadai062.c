#include<stdio.h>
main()
{
	int i;
	i = 20;
	do
	{
		printf("%3d",i);
		i--;
		if (i == 10)
		{
			printf("\n");
		}
	} while (i > 0);
	printf("\n");
}