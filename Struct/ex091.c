#include<stdio.h>
struct profile
{
	char name[20];
	int burth[3];
	char blood[5];
};
main()
{
	struct profile joho;
	struct profile* p;
	p = &joho;
	printf("–¼‘O‚ð“ü—Í:");
	scanf("%s", &p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &p->burth[0], &p->burth[1], &p->burth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", &p->blood);
	printf("%s--%04d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^- %s Œ^\n", p->name, p->burth[0], p->burth[1], p->burth[2], p->blood);
}