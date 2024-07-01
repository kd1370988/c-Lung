#include<stdio.h>
main()
{
	int i, j, k, kei,kei1,kei2,a[2][2][3];
	a[0][0][0] = 3;
	a[0][0][1] = 4;
	a[0][0][2] = 5;
	a[0][1][0] = 4;
	a[0][1][1] = 5;
	a[0][1][2] = 6;
	a[1][0][0] = 2;
	a[1][0][1] = 2;
	a[1][0][2] = 3;
	a[1][1][0] = 2;
	a[1][1][1] = 5;
	a[1][1][2] = 6;
	for (i = 0, kei = 0; i < 2; i++)
	{
		printf("ƒAƒp[ƒg%d", i + 1);
		for (j = 0,kei1=0; j < 2; j++)
		{
			printf("(%dŠK):",j+1);
			for (k = 0,kei2=0; k < 3; k++)
			{
				printf("%d ", a[i][j][k]);
				kei += a[i][j][k];
				kei1 += a[i][j][k];
				kei2 += a[i][j][k];
			}
			printf("\n%dlZ‚ñ‚Å‚¢‚Ü‚·\n", kei2);
			printf("\t");
		}
		printf("\n%dlZ‚ñ‚Å‚¢‚Ü‚·\n", kei1);
		printf("\n");
	}
	printf("‘S‘Ì‚Å%dlZ‚ñ‚Å‚¢‚Ü‚·\n", kei);
}