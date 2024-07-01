#include<stdio.h>
main()
{
	int i, j;
	float x[3][2], hei,ghei;
	for (i = 0, hei = 0,ghei =0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			hei += x[i][j];
			ghei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n", i, hei / 2);
		hei = 0;
	}
	printf("‡Œv‚Ì•½‹Ï = %.2f", ghei / 6);
}