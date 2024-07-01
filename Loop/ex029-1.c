#include<stdio.h>
main()
{
	int kai;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &kai);
	while (kai > 0) {
		printf("*");
		kai--;
	}
	printf("\n");
}