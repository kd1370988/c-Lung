#include<stdio.h>
main()
{
	int i, data[10],tan;
	data[0] = 10;
	data[1] = 5;
	data[2] = 30;
	data[3] = 77;
	data[4] = 16;
	data[5] = 3;
	data[6] = 47;
	data[7] = 29;
	data[8] = 37;
	data[9] = 33;
	printf("�T���l�́H");
	scanf("%d", &tan);
	for (i = 0; i < 10; i++)
	{
		if (tan == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("data[%d]�ɂ�����\n", i);
	}
}