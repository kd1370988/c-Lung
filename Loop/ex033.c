#include<stdio.h>
main()
{
	int su, gokei, i;
	gokei = 0;
	printf("���́H");
	scanf("%d", &su);
	for (i = 0; su != -999; i = i + 1) {
		gokei = gokei + su;
		printf("���́H");
		scanf("%d", &su);
	}
	printf("���v=%d    ", gokei);
	printf("����=%.2f\n", (float)gokei / i);
}