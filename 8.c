#include<stdio.h>
#include<math.h>
#define pi 3.141592
double sin_degree(double degree);

int main() {
	double ang;
	for (ang = 0; ang <= 180; ang += 10.0) {
		printf("sin(%lf)의 값은 %lf\n", ang, sin(ang*pi/180.0));
	}

/*	for (ang = 0; ang <= 180; ang += 10.0) {
		printf("sin(%lf)의 값은 %lf\n", ang, sin_degree(ang));
	}*/

	return 0;
}

double sin_degree(double degree) {
	return sin(degree * pi / 180.0);
}