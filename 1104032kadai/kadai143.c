#include<stdio.h>
#include<stdlib.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit fruit1;
	strcpy(fruit1.name, "peach");
	fruit1.price = 300;
	fruit1.point = 5;
	fruit1.number = 3;
	fruit1.total = 0;
	printf("���i��:  %s\n", fruit1.name);
	printf("���i:    %d\n", fruit1.price);
	printf("���E�ߓx:");
	for (int i = 0; i < fruit1.point; i++)
	{
		printf("��");
	}
	printf("\n");
	printf("��:    %d��\n", fruit1.number);
	fruit1.total = fruit1.price * fruit1.number;
	printf("���z:    ��%d-\n",fruit1.total);
}