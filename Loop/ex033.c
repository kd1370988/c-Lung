#include<stdio.h>
main()
{
	int su, gokei, i;
	gokei = 0;
	printf("数は？");
	scanf("%d", &su);
	for (i = 0; su != -999; i = i + 1) {
		gokei = gokei + su;
		printf("数は？");
		scanf("%d", &su);
	}
	printf("合計=%d    ", gokei);
	printf("平均=%.2f\n", (float)gokei / i);
}