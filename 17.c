#include<stdio.h>
#define e 0.000001
double f_abs(double x);
double f_min(double x, double y);
int f_equal(double x, double y);
int main() {
	double x, y;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &y);

	if (f_equal == 1)
		printf("�� ���� �Ǽ��� ���� ����");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�");

	return 0;
}
double f_abs(double x) {
	return (x > 0) ? x : -x;
}

double f_min(double x, double y) {
	return (x > y) ? y : x;
}

int f_equal(double x, double y) {
	return (f_abs(x - y) / f_min(f_abs(x), f_abs(y)) < e) ? 1 : 0;
}
