#include<stdio.h>
main()
{
	float suu1,suu2;
	printf("２つの実数値？:");
	scanf("%f%f",&suu1,&suu2);
	printf("大きいほうは = ");
	if (suu1 < suu2)
	{
		printf("%.5f", suu2);
	}
	else
	{
		printf("%.5f", suu1);
	}
}