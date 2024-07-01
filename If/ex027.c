#include<stdio.h>
main()
{
	char moji;
	printf("•¶š‚ğ“ü—Í:");
	scanf("%c", &moji);
	if (moji <= 'Z' && moji >= 'A') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n",moji+0x20);
	}
	else if (moji <= 'z' && moji >= 'a') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji - 0x20);
	}
	else {
		printf("ƒGƒ‰[‚Å‚·\n");
	}
}