#include<stdio.h>
main()
{
	int kai;
	printf("数を入れて:");
	scanf("%d", &kai);
	while (kai > 0) {
		printf("*");
		kai--;
	}
	printf("\n");
}