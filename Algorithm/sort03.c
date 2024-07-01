#include<stdio.h>
main()
{
	int d[] = { 16,84,53,65,94 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] <= d[j])
			{
				break;
			}
			else
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", d[i]);
	}
	printf("\n");
}