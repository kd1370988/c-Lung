#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (moji <= 'Z' && moji >= 'A') {
		printf("変換すると%c\n",moji+0x20);
	}
	else if (moji <= 'z' && moji >= 'a') {
		printf("変換すると%c\n", moji - 0x20);
	}
	else {
		printf("エラーです\n");
	}
}