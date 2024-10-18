#include <stdio.h>
#include <stdlib.h> // atoi, atof

int main(int argc, const char *argv[])
{
#if 0
	// display the value of argc
	printf("argc = %d\n", argc); // argc is the number of arguments passed to the program

	// test with :
	// ./app                   : 1
	// ./app 10 20             : 3
	// ./app toto titi         : 3 
	// ./app Albert Einstein   : 3
	// ./app "Albert Einstein" : 2
	// ./app 3.14 2.71828 9    : 4

	// first step : check the number of arguments
	// example labo03 needs 3 arguments ex: ./app 10 20
	if(argc != 3)
	{
		printf("Error, bad number of arguments\n");
		printf("Usage : ./app 10 20\n");
		return 1;
	}
	printf("1st argument = %s\n", argv[0]);
	printf("2nd argument = %s\n", argv[1]);
	printf("3rd argument = %s\n", argv[2]);

	int i = 0;
	double x = 0.;

	i = atoi(argv[1]);
	x = atof(argv[2]);
	printf("i = %d, x = %f\n", i, x);
#endif

	int i = 42;
	printf("i = %d\n", i);
	// ++ : operator de post incrementation
	//i++; // equivalent to i = i + 1;

	// ++ : operator de pre incrementation
	++i; // equivalent to i = i + 1;
	printf("i = %d\n", i);

	puts("---------");
	i = 57;
	printf("i = %d\n", i); // 57
	int j = 0;
	j=i++; // post incrementation
	// j=i;
	// i = i + 1;
	printf("j = %d\n", j); // 57
	printf("i = %d\n", i); // 58

	puts("---------");
	i = 57;
	printf("i = %d\n", i); // 57
	j = 0;
	j=++i; // pre incrementation
	// i = i + 1;
	// j=i;
	printf("j = %d\n", j); // 58
	printf("i = %d\n", i); // 58

	i = i + 1; // standard notation
	i += 1; // short notation

	j /= 4; // j = j / 4;
	i %= j; // i = i % j;

	return 0;
}