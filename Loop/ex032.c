#include<stdio.h>
main()
{
	int i, su;
	printf("数を入れて:");
	scanf("%d", &su);
	for (i = 1; i <= 5; i = i + 1) {
		printf(" %d ", su * i);
	}
	printf("\n");
}