#include<stdio.h>
main()
{
	int a=100, b=200, w;
	int* p_a, * p_b, *p_w;
	p_a = &a;
	p_b = &b;
	p_w = &w;
	printf("���s�O�Fa=%d b=%d\n", a, b);
	*p_w = *p_a;
	*p_a = *p_b;
	*p_b = *p_w;
	printf("���s��Fa=%d b=%d\n", *p_a, *p_b);
}