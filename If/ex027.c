#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji <= 'Z' && moji >= 'A') {
		printf("�ϊ������%c\n",moji+0x20);
	}
	else if (moji <= 'z' && moji >= 'a') {
		printf("�ϊ������%c\n", moji - 0x20);
	}
	else {
		printf("�G���[�ł�\n");
	}
}