#include<stdio.h>
main()
{
	char moji1;
	printf("���������:");
	scanf("%c", &moji1);
	if (moji1 <= 0x5A && moji1 >= 0x41) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else if (moji1 <= 0x7A && moji1 >= 0x61) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else if (moji1 <= 0x39 && moji1 >= 0x30) {
		printf("�����ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}