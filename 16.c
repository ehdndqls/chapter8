#include<stdio.h>
double factorial(int n);
int main() {
	int i, n;
	double result = 0;

	printf("������ ����ұ��: ");
	scanf_s("%d", &n);
	
	result += 1;
	for (i = 1; i < n; i++) {
		result += 1 / factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�", result);

	return 0;
}
double factorial(int n) {
	long long result=1;
	for (n; n>0; n--) {
		result *= n;
	}
	return (double)result;
}