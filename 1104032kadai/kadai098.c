#include<stdio.h>
main()
{
	int i, max, min;
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	max = 0;
	min = 999;
	printf("�z�� data = ");
	for (i = 0; i < 10; i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
		if (min > data[i])
		{
			min = data[i];
		}
		printf("%d ", data[i]);
	}
	printf("\n�ő�l = %d    �ŏ��l = %d\n", max, min);
}