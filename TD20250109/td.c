#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int separate_string(const char *s, const char *sep)
{
	int num = 0;
	bool found = false;
	for (int i = 0; i < strlen(s); i++)
	{
		int j = 0;
		found = false;
		while (*(sep + j))
		{
			if (*(s + i) == *(sep + j)) // en notation tableau : if (s[i]==sep[j])
			{
				found = true;
				num++;
				putchar('\n');
			}
			j++;
		}
		if (!found)
		{
			putchar(*(s + i));
		}
	}
	puts("");
	return num+(strlen(s)>0);
}

int change_word(const char s1[], const char w1[], char s2[], const char w2[]) {
	char *s = strstr(s1, w1);
	if (!s)
	{
		strcat(s2, s1);
		return 0;
	}
	strncpy(s2, s1,s-s1);
	strcat(s2, w2);
	strcat(s2, s+strlen(w1));
	return 1;
}

int main(int argc, const char *argv[])
{
	char xx=42;
	printf("%d\n", sizeof(xx));
	printf("%d\n", sizeof(xx>>1));
#if 1
	const char *s = "il-fait-beau-et-chaud.La mer monte.Le chat/est/gris";
	const char *sep = "- ./";
	int num=separate_string(s, sep);
	printf("num=%d\n", num);
#endif
#if 0
	const char s1[100] = "Le chat est gris";
	char s2[100] = "";
	const char w1[] = "chat";
	const char w2[] = "chameau";
	int num = change_word(s1, w1, s2, w2);
	printf("num=%d\n", num);
	printf("s2=[%s]\n", s2);
#endif
	return 0;
}