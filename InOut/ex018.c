#include<stdio.h>
main()
{
	int no1, no2, no3, gokei;
	printf("�������R���́F");
	scanf("%d%d%d", &no1, &no2, &no3);
	gokei = no1 + no2 + no3;
	printf("���v=%d  ", gokei);
	//printf("����=%.2f\n", gokei / 3.0);
	printf("����=%.2f\n", (float)gokei / 3);
}