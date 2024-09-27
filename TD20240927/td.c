#include <stdio.h>

int main(int argc, const char *argv[])
{
	double a = 0.; // create a variable named a initilized to 0. as a real value
	double b = 0.; // double precision (64bits)
	double c = 0.;
	double r = 0.;

	//a = 10.;
	//b = 20.;
	//c = 0.5;

	printf("Enter a: ");
	scanf("%lf", &a);   // important: %lf (double),  &a (emplacement de la variable a en mémoire)

	printf("Enter b: ");
	scanf("%lf", &b);

	printf("Enter c: ");
	scanf("%lf", &c);

	r = a * b * c;

	printf("%lf\n", r);

	return 0;
}