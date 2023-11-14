#define pi 3.141592
#include<stdio.h>

double cal_area(double);

int main() {
	double radius;

	printf("원의 반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	printf("원의 면적은 %lf입니다.", cal_area(radius));

	return 0;
}

double cal_area(double radius) {
	printf("%lf", radius);
	return radius * radius * pi;
}