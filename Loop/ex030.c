#include<stdio.h>
main()
{
	int moto, i;
	printf("数を入れて:");
	scanf("%d", &moto);
	i = 0;
	while (i < 11) {
		printf("%d + %d = %d\n", moto, i, moto + i);
		i++;
	}
}