#include<stdio.h>
main()
{
	int i,j,tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl;
	p_tbl = tbl[0];
	printf("二次元配列tblの内容\n");
	for (i = 0; i < 3; i++)
	{
		p_tbl++;
		printf("%d  ", *p_tbl++);
		p_tbl++;
	}
	printf("\n");
}