#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
#if 0
	int i = 0;
	int ret = 0;
	do
	{
		printf("Enter an integer >0: ");
		ret = scanf("%d", &i);
		if (ret != 1)
		{
		//  do
		//	{
		//	} while (getchar() != '\n');

		//	while (getchar() != '\n');

			char c = 0;
			do {
				c = getchar();
			} while (c != '\n');
		}

	} while (i <= 0); // !(i>0)

	printf("i=%d\n", i);
#endif
#if 0
	int i = 0;
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", i);
	}
	puts("");

	for (i = 10; i >= 0; i--)
	{
		printf("%d ", i);
	}
	puts("");

	double x = 0.;
	for (x = 10.; x >= 0.; x-=1e-4) {
		printf("%.20lf\n", x);
	}
#endif

	const int N = 13;
	const double A = 4.;
	const double alpha_start = 0.;
	const double alpha_end = 2.*M_PI;
	double step = (alpha_end - alpha_start) / (N - 1);
	double alpha = 0.;

	for (alpha = alpha_start; alpha <= alpha_end; alpha+=step) {
		printf("%+6.4lf\n", A * sin(alpha));
	}

	int i = 0;
	for (i = 0, alpha = alpha_start; i < N; i++, alpha += step) {
		printf("%+6.4lf\n", A * sin(alpha));
	}
		return 0;
}