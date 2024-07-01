#include<stdio.h>
main()
{
	char moji1;
	printf("文字を入力:");
	scanf("%c", &moji1);
	if (moji1 <= 0x5A && moji1 >= 0x41) {
		printf("アルファベットです");
	}
	else if (moji1 <= 0x7A && moji1 >= 0x61) {
		printf("アルファベットです\n");
	}
	else if (moji1 <= 0x39 && moji1 >= 0x30) {
		printf("数字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
}