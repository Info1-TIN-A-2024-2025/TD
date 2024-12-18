#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
#if 0
	char *s1 = "POKLOPAC MALI";
	printf("%lu\n", strlen(s1));
	printf("%lu\n", sizeof(s1));
	
	char s2[] = "POKLOPAC MALI";
	printf("%lu\n", strlen(s2));
	printf("%lu\n", sizeof(s2));
	
	char s3[100] = "POKLOPAC MALI";
	printf("%lu\n", strlen(s3));
	printf("%lu\n", sizeof(s3));
#endif
#if 0

#define MAX_NAME_SIZE 10

	char name[MAX_NAME_SIZE] = {0};
	printf("Enter you name: ");
	//scanf("%s", name);
	//gets(name);
	fgets(name, MAX_NAME_SIZE, stdin);
	printf("Your name is [%s]\n", name);
	fprintf(stdout, "Your name is [%s]\n", name);
	fprintf(stderr, "NO ERRO :)\n");
#endif
#if 1
	char t1[2][3] = {"OK", "NG"};
	printf("%s\n", t1[0]);
	printf("%s\n", t1[1]);

	char t2[][3] = {"OK", "NG", "XX", "YY"};
	printf("%s\n", t2[0]);
	printf("%s\n", t2[1]);
	printf("%s\n", t2[2]);
	printf("%s\n", t2[3]);

	char *t3[] = {"il", "fait", "beau", "et", "chaud", "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit"};

	for (unsigned int index = 0; index < 6;index++)
		printf("%s\n", t3[index]);
#endif

	return 0;
}