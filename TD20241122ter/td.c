#include <stdio.h>
#include <math.h>

int discriminant(const double a, const double c, const double d, double *delta); // prototype

int main(int argc, const char *argv[])
{
	double a = -1.;
	double b = 2.;
	double c = 4.;
	double delta = 0.;
	int s = 0;
	s = discriminant(a, b, c, &delta);
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);
	printf("c = %lf\n", c);
	printf("∆ = %lf\n", delta);
	printf("s = %+d\n", s);
	return 0;
}

int discriminant(const double a, const double b, const double c, double *delta) {

	*delta = b * b - 4. * a * c;
	return *delta == 0 ? 0 : *delta / fabs(*delta);
}