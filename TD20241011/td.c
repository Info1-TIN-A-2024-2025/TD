#include <stdio.h>
#include <limits.h>	
#include <float.h>	

int main(int argc, const char *argv[])
{
	// display the min and max values of the type char
	printf("The range of a variable type char is %d ... %d\n", CHAR_MIN, CHAR_MAX);

	// display the min and max values of the type short
	printf("The range of a variable type short is %d ... %d\n", SHRT_MIN, SHRT_MAX);

	// display the min and max values of the type float
	printf("The range of a variable type float is %f ... %f\n", FLT_MIN, FLT_MAX);
	printf("The range of a variable type float is %e ... %e\n", FLT_MIN, FLT_MAX);

	// display the min and max values of the type double
	//printf("The range of a variable type double is %lf ... %lf\n", DBL_MIN, DBL_MAX);
	printf("The range of a variable type double is %le ... %le\n", DBL_MIN, DBL_MAX);

	// display the min and max values of the type long double
	//printf("The range of a variable type long double is %Lf ... %Lf\n", LDBL_MIN, LDBL_MAX);
	printf("The range of a variable type long double is %Le ... %Le\n", LDBL_MIN, LDBL_MAX);



	float x = 1e-40; // 1.10^(-40)
	printf("x = %f\n", x); // %f => 6 digits after the decimal point
	printf("x = %.50f\n", x);
	
	double y = 1e-40;
	printf("y = %.50lf\n", y);
#if 0
	int b = 42;
	int r = 0;
	r = b / 0; // division by zero => crash => test before division
	printf("r = %d\n", r);
#endif

	double d = 42.0;
	double e = 0.0;
	printf("d / e = %f\n", d / e); // division by zero => infinity


	// c is the light spped in m/s
	const double c = 299792458.0; // [m/s]
	const double num_sec_per_hour = 3600; // 60 * 60
	const double num_meter_per_mile = 1609.344; // 1 mile = 1609.344 m
	double result = 0.0;
	// convert c to mph
	result = c * num_sec_per_hour / num_meter_per_mile;
	printf("The light speed is %.1lf mph\n", result);
#if 0
	// let's move to proxima centauri where the speed of light is half the speed of light on earth
	c = c / 2.;
	// convert c to mph
	result = c * num_sec_per_hour / num_meter_per_mile;
	printf("The light speed is %.1lf mph\n", result);
#endif
	return 0;
}