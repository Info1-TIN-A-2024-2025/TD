#include <stdio.h>

void min_max(const char a, const char b, char *mi, char *ma); // prototype

int main(int argc, const char *argv[])
{
	char c1 = 'A';
	char c2 = 'Z';
	char min_c1_c2 = 0;
	char max_c1_c2 = 0;

	// c1 et c2 sont des passages par valeur
	// min_c1_c2 et max_c1_c2 sont passés par adresse
	min_max(c1, c2, &min_c1_c2, &max_c1_c2);

	printf("c1=%d\n", c1);
	printf("c2=%d\n", c2);
	printf("min_c1_c2=%d\n", min_c1_c2);
	printf("max_c1_c2=%d\n", max_c1_c2);
	return 0;
}

void min_max(const char a, const char b, char *mi, char *ma) {

	*mi = a < b ? a : b;
	*ma = a < b ? b : a;

	return;
}