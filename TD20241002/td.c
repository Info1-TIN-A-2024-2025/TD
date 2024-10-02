#include <stdio.h>

int main(int argc, const char *argv[])
{
	double u = 0.; 
	double r = 0.;
	double i = 0.;

	printf("Enter the voltage [V]: ");
	scanf("%lf", &u);

	printf("Enter the resistance [Ω]: ");
	scanf("%lf", &r);

	if(r<=0.) {
		printf("The resistance must be greater than 0.\n");
		return 1;
	}

	i = u / r;

	printf("The current is: %.10E [A]\n", i);
	return 0;
}