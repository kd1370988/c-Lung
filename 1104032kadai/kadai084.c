#include<stdio.h>
main()
{
	int a, b;
	while (1)
	{
		printf("整数１(-999で終了)？");
		scanf("%d", &a);
		printf("整数２(-999で終了)？");
		scanf("%d", &b);
		if (a == -999 || b == -999)break;
		if (b == 0)continue;
		printf("%d / %d = %d\n", a, b, a / b);
	}
	printf("\n");
}