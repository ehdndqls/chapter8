#define pi 3.141592
#include<stdio.h>

double cal_area(double);

int main() {
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	printf("���� ������ %lf�Դϴ�.", cal_area(radius));

	return 0;
}

double cal_area(double radius) {
	printf("%lf", radius);
	return radius * radius * pi;
}