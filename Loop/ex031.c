#include<stdio.h>
main()
{
	int i,kei;
	kei = 0;
	for (i = 1; i <= 10; i = i + 1)
	{
		kei = kei + i;
		printf("1から%dまでの和 = %d\n", i, kei);
	}
}