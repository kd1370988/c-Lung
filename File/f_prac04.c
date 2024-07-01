#include<stdio.h>

#define Sol_Num 3

typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;


void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sols[Sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < Sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
			s++;
		}
		fclose(fp);
	}
	else
	{
		printf("読み込みエラー\n");
		return;
	}
}

void Display(Soldier* s)
{
	int i;
	for (i = 0; i < Sol_Num; i++)
	{
		printf("名前:%s 体力:%d \n武器名:%s 残弾数:%d 攻撃力:%.2f\n\n", s->name, s->hp, s->wpn.Wname, s->wpn.bullet, s->wpn.atk);
		s++;
	}
}