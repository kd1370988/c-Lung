#include<stdio.h>
main()
{
	int no,h,m,s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &no);
	s = no % 60;
	m = ( (no - s) % 3600 )/60;
	h = no / 3600;
	if (no > 5000) {
		printf("ƒGƒ‰[‚Å‚·\n");
	}
	else {
		printf("%d%d•ª%d•b‚Å‚·\n", h, m, s);
	}
}