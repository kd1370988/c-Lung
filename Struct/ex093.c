#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},{ "ケシゴム",50,2 },{"フデバコ",500,3} };
	struct syohin_data * p;
	p = &syohin;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("商品名 : %s  ", p->name);
		printf("単 価 : %4d  ", p->tanka);
		printf("個 数 : %2d  ", p->kosuu);
		printf("金 額 : ￥%5d\n", p->kosuu * p->tanka);
		p++;
	}
}