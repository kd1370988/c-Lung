#include<stdio.h>
main()
{
	int han, no1, no2;
	printf("演算子を入力:");
	scanf("%d", &han);
	printf("２つの整数を入力:");
	scanf("%d%d", &no1, &no2);
	if (han == 1) {
		printf("%d", no1 + no2);
	}
	else if (han == 2) {
		printf("%d", no1 - no2);
	}
	else if (han == 3) {
		printf("%d", no1 * no2);
	}
	else if (han == 4) {
		printf("%d", no1 / no2);
	}
	else {
		printf("エラー");
	}
}

