#include<stdio.h>
main()
{
	char moji[] = "orange";
	int i;
	printf("������:%s\n", &moji[0]);
	for (i = 0; moji[i] != 0; i++);
	printf("��������%d����\n", i);
}