#include<stdio.h>
int GetMax(int data[]);
int GetMin(int data[]);
main()
{
	int data[] = { 6,10,8,2,9,5,1,7 }, max, min;
	max = GetMax(data);
	min = GetMin(data);
	printf("Å‘å’l = %d\nÅ¬’l = %d\n", max, min);
}
int GetMax(int data[])
{
	int ans,i,w;
	for (i = 0; i < 8; i++)
	{
		if (data[i] > data[i + 1])
		{
			w = data[i];
			data[i] = data[i + 1];
			data[i + 1] = w;
		}
	}
	ans = data[i-1];
	return ans;
}
int GetMin(int data[])
{
	int ans, i, w;
	for (i = 7; i >= 0; i--)
	{
		if (data[i] < data[i - 1])
		{
			w = data[i];
			data[i] = data[i - 1];
			data[i - 1] = w;
		}
	}
	ans = data[i];
	return ans;
}
