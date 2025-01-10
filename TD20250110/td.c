#include <stdio.h>
#include <string.h>


int main(int argc, const char *argv[])
{
	#if 0
	char s1[] = "MALI";
	char s2[5] = "SIM";
	char *s3 = "JA";
	char *s4 = "ABC\0DEF"; /// streln(s4) -> 3
	// printf(s4) -> ABC
	// printf("[%-8s]",s4); -> [ABC     ]
	// printf("[%8s]",s4);  -> [     ABC]
	int k = 1234;
	// printf("[%10d]",k);  -> [      1234]
	// printf("[%-10d]",k); -> [1234      ]
	// printf("[%+10d]",k); -> [     +1234]
	// printf("[%+-10d]",k); -> [+1234    ]

	char ts1[][4] = {"OK", "NG", "UN"};
	char ts2[2][5] = {"ABC", "DEF"};
	char *ts3[4] = {"OK1", "NG", "UN CHAT", "\0"};

	// strlen(ts3[0]); -> 3
	// strlen(ts3[1]); -> 2
	// strlen(ts3[2]); -> 7
#endif
	char *s5 = "il fait beau et chaud";
	char *mot = "fait";
	char *pos = NULL;
	pos = strstr(s5, mot);
	printf("Address of s5  : %p\n", s5);
	printf("Address of mot : %p\n", mot);
	printf("Value of pos   : %p\n", pos);
	printf("number of chars before the mot : %d", pos - s5);
	return 0;
}

int f(int a, int *b, int *c, int *d) {
	a++;
	*b -= --a;
	*c = *b;
	d = c;
	*d = 0;
	return (*c)--;
}
















int main3(int argc, const char *argv[])
{
	int i = 10;
	int j = 20;
	int k = 30;
	int l = 40;
	int m = 50;
	m = f(i, &j, &k, &l);
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	printf("k=%d\n", k);
	printf("l=%d\n", l);
	printf("m=%d\n", m);
	return 0;
}




int main2(int argc, const char *argv[])
{
	// décalage >> et <<
	// <<1 => x2
	// >>1 => /2
	// attention aux nombres de bits significatifs dans la variable résultat
	// possible perte de précision

	// 'A' => valeur code ASCII de 'A' => 65
	// 'a' => valeur code ASCII de 'a' => 97
	int x = 'A' + 'B'; // x <- 131
	printf("%d", x);

	printf("%d", 'A'+1); // 'A' => 65, +1 => 66
	printf("%c", 'A'+1); // 'B'
	printf("%X", 'A'+1); // 42
	
	char i = '0';



	return 0;
}