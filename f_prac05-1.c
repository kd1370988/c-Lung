#include<stdio.h>

#define MapNum 3
#define W 10
#define H 5

typedef struct
{
	int m_map[H][W];
}Map;

typedef struct
{
	int x, y;
}Pos;

void SetMap(char* filename, Map* m);
void CharaMove(Map* m,Pos *p,int* loop);
void DrawMap(Map m);

main()
{
	Map MapData;
	Pos CharaPos = { 1,1 };
	
	char* MapFileName[MapNum] = { "map0.txt","map1.txt","map2.txt" };
	int select = 0;
	int loop = 1;
	
	if (select < 3)
	{
		SetMap(MapFileName[select], &MapData);
		MapData.m_map[CharaPos.y][CharaPos.x] = 2;
		while (loop)
		{
			system("cls");
			DrawMap(MapData);
			CharaMove(&MapData, &CharaPos,&loop);
		}
	}
	else
	{
		printf("エラー\n");
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i,j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
	else
	{
		printf("読み込みエラー\n");
		return;
	}
}

void CharaMove(Map* m, Pos* p,int* loop)
{
	char ch;
	ch = getch();
	switch (ch)
	{
	case 'd':
		if (m->m_map[p->y][(p->x) + 1] == 0)
		{
			m->m_map[p->y][p->x] = 0;
			p->x += 1;
			m->m_map[p->y][p->x] = 2;
		}
		break;
	case 'a':
		if (m->m_map[p->y][(p->x) - 1] == 0)
		{
			m->m_map[p->y][p->x] = 0;
			p->x -= 1;
			m->m_map[p->y][p->x] = 2;
		}
		break;
	case 's':
		if (m->m_map[(p->y) + 1][p->x] == 0)
		{
			m->m_map[p->y][p->x] = 0;
			p->y += 1;
			m->m_map[p->y][p->x] = 2;
		}
		break;
	case 'w':
		if (m->m_map[(p->y) - 1][p->x] == 0)
		{
			m->m_map[p->y][p->x] = 0;
			p->y -= 1;
			m->m_map[p->y][p->x] = 2;
		}
		break;
	default:
		*loop = 0;
		break;
	}
}


void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			switch (m.m_map[i][j])
			{
			case 0:printf(" ");
				break;
			case 1:printf("■");
				break;
			case 2:printf("c");
				break;
			}
		}
		printf("\n");
	}
	printf("\n");
}

