#include<stdio.h>
main()
{
	int kai;
	printf("��������:");
	scanf("%d", &kai);
	while (kai > 0) {
		printf("*");
		kai--;
	}
	printf("\n");
}