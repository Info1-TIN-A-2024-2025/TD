#include <stdio.h>
#include <stdlib.h>

// procedure : pas d'entrée, pas de sortie
void proc(void) {
	puts("fonction super utile !");
	return;
}

// fonction : pas d'entrée, une sortie entre 0 et 100
int generate_random_value(void) {
	return rand()%101;
}

// fonction : une entrée, une sortie entre 0 et n
int generate_random_value_2(int n) {
	return rand()%(n+1);
}

// fonction : deux entrées, une sortie
double min(double x, double y) {
	return x < y ? x : y;
}

// fonction : une entrée, pas de sortie
void display_hex(int n) {
	printf("%X\n", n);
	return;
}





double mult_by_two(double a); // prototype de la fonction


int main(int argc, const char *argv[])
{
	double x = 0.;
	double y = 0.;

	if (argc!=2) {
		puts("Not enough args.");
		return 1;
	}
	x = atof(argv[1]);

	y = mult_by_two(x); // passage par valeur

	printf("%lf\n", y);
	return 0;
}



double mult_by_two(double a) { // a récupère la VALEUR de x
	printf("a=%lf\n", a);
	return 2. * a;
}

