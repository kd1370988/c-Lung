#include<stdio.h>
main()
{
	int high, low, mid, data[11], s;
	printf("ŒŸõ’l‚ÍH");
	scanf("%d", &s);
	data[0] = 10;
	data[1] = 15;
	data[2] = 18;
	data[3] = 23;
	data[4] = 28;
	data[5] = 35;
	data[6] = 47;
	data[7] = 55;
	data[8] = 68;
	data[9] = 78;
	data[10] = 96;
	high = 11;
	low = 0;
	while (high >= low)
	{
		mid = (high + low) / 2;
		if (data[mid] == s)
		{
			break;
		}
		if (data[mid] < s) 
		{
			low = mid + 1;
		}
		if (data[mid] > s)
		{
			high = mid - 1;
		}
	}
	if (high < low)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("%d”Ô–Ú\n", mid);
	}
}