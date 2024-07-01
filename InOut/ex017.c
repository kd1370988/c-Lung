#include<stdio.h>
main()
{
	int no1, no2, no3;
	float hei;
	printf("１つ目の整数：");
	scanf("%d", &no1);
	printf("２つ目の整数：");
	scanf("%d", &no2);
	printf("３つ目の整数：");
	scanf("%d", &no3);
	printf("合計%d",no1+no2+no3);
	hei = (no1 + no2 + no3) / 3.0;
	printf("平均=%.2f\n", hei);
}