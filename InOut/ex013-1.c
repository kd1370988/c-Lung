#include<stdio.h>
main()
{
	char moji1, moji2;
	int su1, su2;
	moji1 = '5';
	moji2 = '6';
	su1 = moji1 - 0x30;
	su2 = moji2 - 0x30;
	printf("5 * 6 = %d\n", su1 * su2);
}