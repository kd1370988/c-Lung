#include<stdio.h>
main()
{
	int i;
	for (i = 1; 1; i++)
	{
		if (i == 21)break;
		if (i % 2 == 0)continue;
		printf("%d ", i);
	}
	printf("\n");
}