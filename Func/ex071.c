#include<stdio.h>
int gokei(int a,int b,int c);
float heikin(int kotae1);
main()
{
	int a, b, c, kotae1;
	float kotae2;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	kotae1 = gokei(a, b, c);
	kotae2 = heikin(kotae1);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", kotae1, kotae2);
}

int gokei(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return ans;
}

float heikin(int kotae1)
{
	float ans;
	ans = kotae1 / 3.0;
	return ans;
}