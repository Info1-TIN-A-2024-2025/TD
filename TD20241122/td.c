#include <stdio.h>
#include <math.h>

void cart_to_polar(double r, double i, double *m, double *a);

int main(int argc, const char *argv[])
{
	double real = 1.0;
	double img = 2.0;

	double module = 1.0;
	double argument = 2.0;

	printf("address of real      = %p\n", &real);
	printf("address of img       = %p\n", &img);
	printf("address of module    = %p\n", &module);
	printf("address of argument  = %p\n", &argument);

// > ./app
// address of real      = 0x7ffe694eca08
// address of img       = 0x7ffe694eca10
// address of module    = 0x7ffe694eca18
// address of argument  = 0x7ffe694eca20

	cart_to_polar(real, img, &module, &argument);

	// cart_to_polar(1.0, 2.0, 0x7ffe694eca18, 0x7ffe694eca20);
	return 0;
}

void cart_to_polar( double r, double i, double *m, double *a ) {
// display r, i m and a
	printf("r  = %lf\n", r);
	printf("i  = %lf\n", i);
	printf("m  = %p\n", m);
	printf("a  = %p\n", a);

	double module_value = sqrt(r * r + i * i);
	double arg_value = atan2(i, r);

	*m = module_value;
	*a = arg_value;

	return;
}


/*
main:
	module  : c'est une variable de type double
	&module : c'est l'adresse de la variable module
	          on l'appelle : pointeur sur la variable module


cart_to_polar:

	m : contient l'adresse d'une valeur de type double
	    c'est aussi un pointeur sur une variable de type double


	*m : c'est la valeur (de type double) contenue à l'adresse m

   ⚠️ ⚠️ ⚠️ RESPECTEZ les types de part et d'autre du signe =
*/