#include<stdio.h>
main()
{
	int ten;
	printf("整数を入力:");
	scanf("%d", &ten);
	ten = ten / 10;
	switch (ten)
	{
	case  1:
		printf("１０点台です\n");
		break;
	case  2:
		printf("２０点台です\n");
		break;
	case  3:
		printf("３０点台です\n");
		break;
	case  4:
		printf("４０点台です\n");
		break;
	default:
		printf("エラーです\n");
		break;
	}
}