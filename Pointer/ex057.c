#include<stdio.h>
main()
{
	int i,j,tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl;
	p_tbl = tbl[0];
	printf("“ñŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (i = 0; i < 9; i++)
	{
		if (i % 3 == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%d  ", *p_tbl++);
	}
	printf("\n");
}