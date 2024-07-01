#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 }, * p_a, sum, i, A, B,C, A2, B2,C2;
	float b[] = { 11.1,22.2,33.3,44.4 }, * p_b, sum2;
	p_a = &a;
	p_b = &b;
	sum = 0;
	sum2 = 0;
	A = sizeof(float);
	B = sizeof b;
	C = B / A;
	A2 = sizeof(int);
	B2 = sizeof a;
	C2 = B2 / A2;
	for (i = 0; i < C2; i++)
	{
		sum += *p_a;
		p_a += 1;
	}
	for (i = 0; i < C; i++)
	{
		sum2 += *p_b;
		p_b += 1;
	}
	printf("配列a　合計 = %d  平均 = %.3f\n配列b　合計 = %.3f　平均 = %.3f\n", sum, (float)sum / C2, sum2, sum2 / C);
}