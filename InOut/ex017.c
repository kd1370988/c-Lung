#include<stdio.h>
main()
{
	int no1, no2, no3;
	float hei;
	printf("�P�ڂ̐����F");
	scanf("%d", &no1);
	printf("�Q�ڂ̐����F");
	scanf("%d", &no2);
	printf("�R�ڂ̐����F");
	scanf("%d", &no3);
	printf("���v%d",no1+no2+no3);
	hei = (no1 + no2 + no3) / 3.0;
	printf("����=%.2f\n", hei);
}