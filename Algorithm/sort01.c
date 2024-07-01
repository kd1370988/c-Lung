#include<stdio.h>
main()
{
	//•Ï”—pˆÓ
	int d[] = { 35,19,54,68,16,55 };
	int i, j, w;
	
	//“ü‚ê‘Ö‚¦ˆ—
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if (d[i] < d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	//•\¦ˆ—
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", d[i]);
	}
	printf("\n");
}