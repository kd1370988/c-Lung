#include<stdio.h>
#include<string.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
void display3(struct syohin_data* p);
main()
{
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;
	display3(p);
	printf("%s  %d\n", p->name, p->tanka);
}
void display3(struct syohin_data* p)
{
	strcpy(p->name , "ƒPƒVƒSƒ€");
	p->tanka = 50;
}