#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000

double generate_random_real_value(const double min_value, const double max_value);

void init_array(double *a, const unsigned long n)
{
	// a : adress of the array of double to initialize
	// n : size of the array
	for (unsigned long index = 0; index < n; index++)
	{
		// a[index]=generate_random_real_value(-40., 42.); // [ ] => table notation
		*(a+index)=generate_random_real_value(-40., 42.); // *( + ) => pointer notation
	}

	return;
}

int main(int argc, const char *argv[])
{
	double array[N] = {0};
	double mean = 0.;
	srand((unsigned int)time(NULL));
	init_array(array, N);
#if 0
	for (unsigned long index = 0; index < N; index++)
	{
		array[index] = generate_random_real_value(-40., 42.);
	}
#endif
#if 0
	for (unsigned long index = 0; index < N; index++) {
		printf("%+5.1lf\n",array[index]);
	}
#endif
	for (unsigned long index = 0; index < N; index++) {
		mean += array[index];
	}
	mean /= N; // mean = mean /N
	printf("mean = %+.5lf\n",mean);
	return 0;
}




double generate_random_real_value(const double min_value, const double max_value) {
  double v=rand()/(double)RAND_MAX;
  v*=(max_value-min_value);
  v+=min_value;
  return v;
}