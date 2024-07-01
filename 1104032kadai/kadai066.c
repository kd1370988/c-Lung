#include<stdio.h>
main()
{
	int sum = 0,i = 1;
	do
	{
		sum += i;
		printf("%d+", i);
		i++;
	} while (sum <= 300);
	printf("\b= %d", sum);
}