#include<stdio.h>
#include<string.h>
void sort(int *data, char *jun);
main()
{
	int data[] = {6,10,8,2,9,5,1,7 };
	char jun[2];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	gets(jun);
	sort(data, jun);
	for (int i = 0; i < 8; i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n");
}
void sort(int* data, char *jun)
{
	int w;
	if (strcmp(jun, "~‡") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(data + i) < *(data + j))
				{
					w = *(data + i);
					*(data + i) = *(data + j);
					*(data + j) = w;
				}
			}
		}
	}
	else if (strcmp(jun, "¸‡") == 0)
	{
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 8; j++)
			{
				if (*(data + i) > *(data + j))
				{
					w = *(data + i);
					*(data + i) = *(data + j);
					*(data + j) = w;
				}
			}
		}
	}
	return;
}

