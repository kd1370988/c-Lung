#include<stdio.h>
main()
{
	int su, gokei, i;
	gokei = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (i = 0; su != -999; i = i + 1) {
		gokei = gokei + su;
		printf("”‚ÍH");
		scanf("%d", &su);
	}
	printf("‡Œv=%d    ", gokei);
	printf("•½‹Ï=%.2f\n", (float)gokei / i);
}