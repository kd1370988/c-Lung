#include<stdio.h>
main()
{
	int ten;
	printf("���������:");
	scanf("%d", &ten);
	ten = ten / 10;
	switch (ten)
	{
	case  1:
		printf("�P�O�_��ł�\n");
		break;
	case  2:
		printf("�Q�O�_��ł�\n");
		break;
	case  3:
		printf("�R�O�_��ł�\n");
		break;
	case  4:
		printf("�S�O�_��ł�\n");
		break;
	default:
		printf("�G���[�ł�\n");
		break;
	}
}