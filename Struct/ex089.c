#include<stdio.h>
#include<stdlib.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile joho;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", joho.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &joho.birth[0], &joho.birth[1], &joho.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", joho.blood);
	printf("%s--%04d”N%02dŒ%02d“ú¶ ŒŒ‰tŒ^- %s Œ^\n", joho.name, joho.birth[0], joho.birth[1], joho.birth[2], joho.blood);
}