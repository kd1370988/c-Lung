#include<stdio.h>
main()
{
	int su1, su2, su3,kei;
	char syo;
	printf("最大値:m　最小値:s　合計:g　平均:h\n");
	printf("処理を入力");
	scanf("%c", &syo);
	printf("整数を入力");
	scanf("%d%d%d", &su1, &su2, &su3);
	switch (syo)
	{
	case 'm':
		if (su1 < su2)
		{
			if (su2 < su3)
			{
				kei = su3;
			}
			else
			{
				kei = su2;
			}
		}
		else if(su1<su3)
		{
			kei = su3;
		}
		else
		{
			kei = su1;
		}
		printf("最大値は%dです\n", kei);
		break;
	case 's':
		if (su1 > su2)
		{
			if (su2 > su3)
			{
				kei = su3;
			}
			else
			{
				kei = su2;
			}
		}
		else if(su1>su3)
		{
			kei = su3;
		}
		else
		{
			kei = su1;
		}
		printf("最小値は%dです\n", kei);
		break;
	case 'g':
		kei = su1 + su2 + su3;
		printf("合計は%dです\n", kei);
		break;
	case 'h':
		kei = su1 + su2 + su3;
		kei = kei / 3;
		printf("平均は%dです\n", kei);
		break;
	default:
		printf("エラーです\n");
	}
}