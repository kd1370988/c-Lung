#include<stdio.h>
main()
{
	int tuki;
	printf("月を入力:");
	scanf("%d", &tuki);
	if (tuki == 1 || tuki == 3 || tuki == 5 || tuki == 7 || tuki == 8 || tuki == 10 || tuki == 12) {
		printf("最終日は31日です");
	}
	else if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11) {
		printf("最終日は30日です");
	}
	else {
		printf("最終日は28日です");
	}
}