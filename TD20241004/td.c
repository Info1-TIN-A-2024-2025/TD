#include <stdio.h>
#include <stdint.h>

int main(int argc, const char *argv[])
{
	float a = 3.3;
	double b = 2.7182818284590452353602874713527;
	long double c = 3.14159265358979323846264338327950288419716939937510582097494459230;

	char d = 0;
	unsigned char e = 42;
	short f = 1000;
	unsigned short g = 42000;
	long h = 123456;
	unsigned long i = 123456789;

	int j = 0;
	unsigned int k = 927;

	uint8_t l = 76; // #include <stdint.h>

	l = 0;
	printf("l = %d\n", l); // %d => base 10, integer

	l = 42; // base 10
	printf("l = %d\n", l); // %d => base 10, integer

	l = 0b00101010; // base 2 - start by 0b
	printf("l = %d\n", l); // %d => base 10, integer

	l = 052; // base 8 - start by 0
	printf("l = %d\n", l); // %d => base 10, integer

	l = 0x2A; // base 16 - start by 0x
	printf("l = %d\n", l); // %d => base 10, integer

	// display l in base 8
	printf("l = %o (base 8)\n", l); // %o => base 8, integer

	// display l in base 16
	printf("l = %x (base 16)\n", l); // %x => base 16, integer
	printf("l = %X (base 16)\n", l); // %x => base 16, integer

	printf("l = %b (base 2)\n", l); // %x => base 2, integer

	l = -5;
	printf("l = %d\n", l); // %d => base 10, integer
	printf("l = %b (base 2)\n", l); // %x => base 2, integer

	return 0;
}