#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double f_rand();
int main() {
	int i;
	
	srand(time(NULL));

	for (i = 0; i < 5; i++)
		printf("%lf ", f_rand());

	return 0;
}

double f_rand() {
	return rand() / (double)RAND_MAX;
}