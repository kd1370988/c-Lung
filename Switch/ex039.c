#include<stdio.h>
main()
{
	int su1, su2, su3,kei;
	char syo;
	printf("�ő�l:m�@�ŏ��l:s�@���v:g�@����:h\n");
	printf("���������");
	scanf("%c", &syo);
	printf("���������");
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
		printf("�ő�l��%d�ł�\n", kei);
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
		printf("�ŏ��l��%d�ł�\n", kei);
		break;
	case 'g':
		kei = su1 + su2 + su3;
		printf("���v��%d�ł�\n", kei);
		break;
	case 'h':
		kei = su1 + su2 + su3;
		kei = kei / 3;
		printf("���ς�%d�ł�\n", kei);
		break;
	default:
		printf("�G���[�ł�\n");
	}
}