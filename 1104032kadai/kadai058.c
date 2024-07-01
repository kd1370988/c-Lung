#include<stdio.h>
main()
{
	int i,j;
	for (i = 32,j=0; i <= 126; i++)
	{
		printf("%x", i);
		printf(" %c  ", (char)i);
		j++;
		if (j == 10)
		{
			printf("\n");
			j = 0;
		}
	}
	printf("\n");
}