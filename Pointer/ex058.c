#include<stdio.h>
main()
{
	int a[3];
	int* p_a;
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p・・・%d\n", *p_a);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+1・・・%d\n", *p_a+1);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*(p+1)・・・%d\n", *(p_a+1));
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1・・・%d\n", *p_a+=1);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p++・・・%d\n", *p_a++);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("(*p)++・・・%d\n", (*p_a)++);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*++p・・・%d\n", *++p_a);
	p_a = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("++*p・・・%d\n", ++*p_a);
}