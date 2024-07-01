#include<stdio.h>
main()
{
	int itbl[] = { 10, 20, 30 };
	int* p_itbl, i;
	float* p_dtbl;
	float dtbl[] = { 10.0, 20.0, 30.0 };
	p_itbl = &itbl;
	printf("*p_itbl = ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *p_itbl);
		p_itbl += 1;
	}
	p_dtbl = &dtbl;
	printf("\n*p_dtbl = ");
	for (i = 0; i < 3; i++)
	{
		printf("%.1f ", *p_dtbl);
		p_dtbl += 1;
	}
}