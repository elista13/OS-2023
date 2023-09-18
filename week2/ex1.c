#include <float.h>
#include <stdio.h>
#include <limits.h>

int main() {

	int x1 = INT_MAX;
	float x2 = FLT_MAX;
	unsigned short x3 = USHRT_MAX;
	long x4 = LONG_MAX;
	double x5 = DBL_MAX;

	printf("Type:int; Size: %lu; Value: %d\n", sizeof(int), x1);
	printf("Type:float; Size: %lu; Value: %f/n", sizeof(float), x2);
	printf("Type:unsigned short; Size: %lu; Value: %d\n", sizeof(unsigned short), b);
	printf("Type:long; Size: %lu; Value: %ld\n", sizeof(long),x4);
	printf("Type:double; Size: %lu; Value: %f\n", sizeof(double),x5);

	return 0;
}
