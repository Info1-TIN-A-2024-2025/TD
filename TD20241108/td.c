#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 0
	char answer = 0;
	printf("Avez-vous correctement révisé les maths (O/N) ? ");
	goto plus_bas;
plus_haut:
	answer = getchar();
ici:
	goto ici;
	switch (answer)
	{
	case 'O':
	case 'Y':
	case 'D':
	case 'E':
	case 'S':
		puts("OK");
		break;
	case 'N':
	case 'H':
		puts("NG");
		break;
	default:
		puts("??");
		break;
	}

plus_bas:
	puts("plus bas, c'est là !");
	goto plus_haut;
#endif
#if 0
	int i = 0;
	for (i = 1; i <= 42;i++) {
		if ((i%7)==0)
			continue;
		printf("%d ", i);
	}
	puts("");
#endif
#if 0
	double x = 0.5;
	int y = 0;
	y = (-1 <= x && x <= 0) || (1 <= x && x <= 2) ? 0 : 1;


	// -1 <=x <=0 // NIET => -1 <= x && x <= 0
#endif
	unsigned int n = 0;
	printf("Combien de 🐈 avez-vous ? ");
	scanf("%u", &n);
	printf("Vous avez .....");
	return 0;
}

// if goto -> note=1 😎