#include<stdio.h>
main()
{
	int i, data[11],tan;
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
	printf("探索値は？");
	scanf("%d", &tan);
	data[10] = tan;
	for (i = 0; data[i] != tan; i++);
	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("data[%d]にあった\n", i);
	}
}