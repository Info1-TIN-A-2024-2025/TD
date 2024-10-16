#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n = 42; // base 10
	unsigned char count = 0;

	// number of digits for n in base 10
	count = (int)log10(n) + 1;
	printf("count = %u digits in base 10\n", count);

	// number of digits for n in base 2
	count = (int)log2(n) + 1;
	printf("count = %u digits in base 2\n", count);


	// number of digits for n in base 16
	count = (int)(log10(n)/log10(16)) + 1;
	printf("count = %u digits in base 16\n", count);


// part 2
	double alpha = 60.;
	double result = 0.;
	const double PI=3.14159265358979323846;

	//result = cos(alpha * PI / 180.);
	result = cos(alpha * M_PI / 180.);

	printf("cos(%.2lf°) = %.6lf\n", alpha, result);

	result = sin(alpha * PI / 180.);
	printf("sin(%.2lf°) = %.6lf\n", alpha, result);

	result = tan(alpha * PI / 180.);
	printf("tan(%.2lf°) = %.6lf\n", alpha, result);

	double c=cos(alpha * PI / 180.);
	double s=sin(alpha * PI / 180.);
	double t = s / c;
	printf("tan(%.2lf°) = %.6lf\n", alpha, t);

	// display the difference between t and result
	printf("difference = %.10le\n", t - result);


	float cf=cos(alpha * PI / 180.);
	float sf=sin(alpha * PI / 180.);
	float tf = sf / cf;
	printf("difference = %.10le\n", tf - result); // float is less precise than double

	return 0;
}

