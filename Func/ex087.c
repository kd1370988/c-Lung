#include<stdio.h>
#include<stdlib.h>
main(int a, char *argv[])
{
	int sum;
	sum = 0;
	if (a == 3)
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%s + %s = %d\n", argv[1], argv[2], sum);
	}
}