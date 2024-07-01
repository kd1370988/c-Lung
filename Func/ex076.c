#include<stdio.h>
void keisan(int a, int b, int* kei, float* hei);
main()
{
	int a, b, kei;
	float hei;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &kei, &hei);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", kei, hei);
}
void keisan(int a, int b, int* kei, float* hei)
{
	*kei = a + b;
	*hei = (a + b) / 2.0;
	return;
}