#include<stdio.h>
main()
{
	int i;
	i = 1;
	while(i <= 20)
	{
		printf("%3d",i);
		i++;
		if (i == 11)
		{
			printf("\n");
		}
	}
	printf("\n");
}