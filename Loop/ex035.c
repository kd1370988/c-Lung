#include<stdio.h>
main()
{
	int kei, su;
	su = 0;
	kei = 0;
	while (1) {
		if (su == -999)break;
		kei += su;
		printf("��������:");
		scanf("%d", &su);
	}
	printf("���v=%d",kei);
}