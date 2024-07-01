#include<stdio.h>
main()
{
	int tuki;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &tuki);
	if (tuki == 1 || tuki == 3 || tuki == 5 || tuki == 7 || tuki == 8 || tuki == 10 || tuki == 12) {
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11) {
		printf("ÅI“ú‚Í30“ú‚Å‚·");
	}
	else {
		printf("ÅI“ú‚Í28“ú‚Å‚·");
	}
}