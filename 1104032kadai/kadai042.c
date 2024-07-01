#include<stdio.h>
main()
{
	int sum = 0,i = 1;
	while (sum < 300)
	{
		sum += i;
		printf("%d+", i);
		i++;
	}
	printf("\b= %d", sum);
}