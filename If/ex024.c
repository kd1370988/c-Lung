#include<stdio.h>
main()
{
	char moji1;
	printf("���������:");
	scanf("%c", &moji1);
	if (moji1 <= 0x5A & moji1 >= 0x41) {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}