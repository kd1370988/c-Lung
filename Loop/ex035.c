#include<stdio.h>
main()
{
	int kei, su;
	su = 0;
	kei = 0;
	while (1) {
		if (su == -999)break;
		kei += su;
		printf("数を入れて:");
		scanf("%d", &su);
	}
	printf("合計=%d",kei);
}