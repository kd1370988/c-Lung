#include<stdio.h>
void keisan(int a, int b, int* kei, float* hei);
main()
{
	int a, b, kei;
	float hei;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &kei, &hei);
	printf("���v��%d�A���ς�%.2f\n", kei, hei);
}
void keisan(int a, int b, int* kei, float* hei)
{
	*kei = a + b;
	*hei = (a + b) / 2.0;
	return;
}