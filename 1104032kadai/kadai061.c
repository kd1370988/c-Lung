#include<stdio.h>
main()
{
	int i;
	i = 1;
	do
	{
		printf("%3d",i);
		i++;
		if (i == 11)
		{
			printf("\n");
		}
	} while (i <= 20);
	printf("\n");
}