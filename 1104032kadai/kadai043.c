#include<stdio.h>
main()
{
	int a;
	printf("文字コード(-1で入力終了)？");
	scanf("%d", &a);
	while (a != -1)
	{
		printf("%c\n", (char)a);
		printf("文字コード(-1で入力終了)？");
		scanf("%d", &a);
	}
}