#include<stdio.h>
main()
{
	int kai,i;
	printf("��������:");
	scanf("%d", &kai);
	i = 0;
	while (kai > i) {
		i++;
		printf("*");
	}
	printf("\n");
}