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
	scanf("%lf", &a);   // keyboard input,
	// important: %lf (double),  &a (address of the variable a in memory)

	printf("Enter b: ");
	scanf("%lf", &b);

	printf("Enter c: ");
	scanf("%lf", &c);

	r = a * b * c;

	printf("%lf\n", r); // output the result ; \n = new line in the terminal

	return 0;
}