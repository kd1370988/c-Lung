#include<stdio.h>
main()
{
	int a;
	printf("整数(-999で入力終了)？");
	scanf("%d", &a);
	while (a != -999)
	{
		printf("8進数 = %o   16進数 = %x\n", a, a);
		printf("整数(-999で入力終了)？");
		scanf("%d", &a);
	}
}