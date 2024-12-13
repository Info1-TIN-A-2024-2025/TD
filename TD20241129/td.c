#include <stdio.h>
void f(int x);
void g(int *p);

int main(int argc, const char *argv[])
{
#if 0
	const double k = 0.621371; // km to miles
	// display k
	printf("k = %f\n", k);
	// update k with +30%
	k = 1.3 * k; // => generate an error !
	printf("k = %f\n", k);
#endif

#if 0
	double x = 3; // x double, 3 int => transtypage automatique de 3 en 3.0 (implicite)
	int y = 3.5;  // transtypage automatique de 3.5 en 3 (implicite) ; perte de la partie décimale ; pas d'arrondi

	double z = 3.5;
	int t = (int)z; // transtypage explicite de 3.5 en 3 (perte de la partie décimale) ; z reste inchangée

#endif

#if 0
	short sh = 0x03E8;
	short *p = &sh; // p contient l'adresse d'une variable de type short

	printf("sh = %d\n", sh); // 1000
	printf("&sh = %p\n", &sh); 
	printf("p = %p\n", p); // adresse de sh
// contenu "vu à l'adresse p"
	printf("*p = %d\n", *p); // 1000

	// &variable => adresse de la variable
	// *pointeur => contenu vu à l'adresse stockée dans p

#endif

#if 0
	int x = 10;
	int y = 20;
	int z = 30;
	int t = 40;
	int ret = 0; // check return scanf

	ret = scanf("%d %d %d %d", &x, &y, &z, &t);
	// display ret, x, y, z, t on one line
	printf("ret = %d, x = %d, y = %d, z = %d, t = %d\n", ret, x, y, z, t);
/*
	saisie    | ret | x | y | z  | t
	1 2 3 4   | 4   | 1 | 2 | 3  | 4
	1 2 3 x   | 3   | 1 | 2 | 3  | 40
	1 2 x 4   | 2   | 1 | 2 | 30 | 40
	1 2 3.4 5 | 3   | 1 | 2 | 3  | 40
*/

#endif

#if 0
	int x = 10;
	int y = 20;
	int z = 30;
	int t = 40;
	int ret = 0; // check return scanf
	printf("enter x:");
	ret = scanf("%d", &x);
	printf("enter y:");
	ret += scanf("%d", &y);
	printf("enter z:");
	ret += scanf("%d", &z);
	printf("enter t:");
	ret += scanf("%d", &t);
	if(ret != 4)
	{
		printf("error: %d values entered\n", ret);
	}
	printf("ret = %d, x = %d, y = %d, z = %d, t = %d\n", ret, x, y, z, t);

#endif
#if 0
// saisie d'une valeur entière
// affichage si valeur paire ou impaire
	int n = 0;
	int ret = 0;
	printf("number of cats:");
	ret = scanf("%d", &n);
	// 0 cat
	// 1 cat
	// 2 cats
	// 3 cats
	if (ret==1) {
		printf("%d cat%s", n, n<2 ? " green" : "s greens");
		printf("%d %s", n, n<2 ? "cat" : "cats");

		switch(n%2)
		{
			case 0:
				printf("even\n");
				break;
			case 1:
				printf("odd\n");
				break;
		}
	}
	else
		printf("error: invalid input\n");


	printf("%s\n", n==0 ? "NULL" : n%2==0 ? "even" : "odd");
#endif
#if 1
	// passage par valeur
	int q = 10;
	f(q); // f(10); -> dans f, la variable q est inconnue ; f ne peut pas modifier q

	// passage par adresse
	int r = 10;
	g(&r); // g(adresse de la variable r); -> dans g, l'adresse de la variable r est connue ; 
			// g peut modifier r
#endif
// 
	return 0;
}

void f(int x)
{
	printf("x = %d\n", x);
	return;
}

void g(int *p) // p contient l'adress d'une variable de type int
{
	*p = 20; // modifie la valeur de la variable pointée par p, soit r dnas l'exemple
	return;
}