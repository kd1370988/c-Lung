#include<stdio.h>
main()
{
	int i,j,kaz=0;
	for (i = 1; i <= 3;i++)
	{
		for (j = 1; j <= 20; j++)
		{
			kaz++;
			printf("%2d ", kaz);
		}
		printf("\n");
	}
}