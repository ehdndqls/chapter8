#include<stdio.h>
double square(double x) {
	double result;
	result = x * x;
	return result;
}

int main() {
	double x;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", x, square(x));
}