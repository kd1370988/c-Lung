#include<stdio.h>
main()
{
	int su,su2, i,j;
	printf("�s���́H");
	scanf("%d", &su);
	printf("*�̐��́H");
	scanf("%d", &su2);
	i = su;
	do {
		j = 1;
		do {
			printf("*");
			j = j + 1;
		} while (j <= su2);
		printf("\n");
		i = i - 1;
	} while (i > 0);
}