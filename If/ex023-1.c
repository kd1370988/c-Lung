#include<stdio.h>
main()
{
	int no, h, m, s;
	printf("秒数を入力:");
	scanf("%d", &no);
	s = no % 60;
	m = ((no - s) % 3600) / 60;
	h = no / 3600;
	if (no > 5000) {
		printf("エラーです\n");
	}
	else if(no<0) {
		printf("マイナスはエラーです\n");
	}
	else {
		printf("%d時%d分%d秒です\n", h, m, s);
	}
}