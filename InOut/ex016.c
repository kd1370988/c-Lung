#include<stdio.h>
main()
{
	float no;
	printf("実数を入れて：");
	scanf("%f", &no);
	printf("２倍すると%.2f\n", no * 2);
	printf("３倍すると%.2f\n", no * 3);
}