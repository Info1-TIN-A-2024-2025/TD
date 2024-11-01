#include <stdio.h>
#include <stdlib.h> // atoi

int main(int argc, const char *argv[])
{
#if 0
	if(argc!=2) {
		puts("bad number of arguments (must be ./app <n>) !");
		return 1;
	}
	n = atoi(argv[1]);

	while(n>=divider) {
		count++; // count=count+1
		n /= divider; // n=n/divider
	}

	printf("count=%u\n", count);
#endif

	int n = 0;
	do {
		printf("entrez une valeur entière multiple de 3 ou 5 : ");
		scanf("%d", &n);
	} while (!((n % 3 == 0) || (n % 5 == 0)));

	if(n % 3 == 0) {
		printf("%d est multiple de 3 (x%d)\n", n, n / 3);
	}
	if(n % 5 == 0) {
		printf("%d est multiple de 5 (x%d)\n", n, n / 5);
	}

	return 0;
}