#include<stdio.h>
main()
{
	float box[3],kei;
	int i;
	kei = 0;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		kei = kei + box[i];
	}
	printf("合計は%.2fです\n", kei);
	printf("平均は%.2fです\n", kei / 3);
}