#include<stdio.h>
main()
{
	int kai,i;
	printf("数を入れて:");
	scanf("%d", &kai);
	i = 0;
	while (kai > i) {
		i++;
		printf("*");
	}
	printf("\n");
}