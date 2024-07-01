#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int suma, sumb,i;
	suma = sumb = 0;
	for (i = 0; i < 10; i++)
	{
		suma = suma + a[i];
		sumb = sumb + b[i];
	}
	printf("\n配列a = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n合計 = %d   平均 = %f", suma, (float)suma / 10);
	printf("\n配列b = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n合計 = %d   平均 = %f", sumb, (float)sumb / 10);
	printf("\n");
}