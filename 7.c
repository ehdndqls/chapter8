#include<stdio.h>
double get_tax(int income);

int main() {
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf_s("%d", &income);

	printf("�ҵ漼�� %.lf�Դϴ�", get_tax(income));

	return 0;
}

double get_tax(int income) {
	double tax;
	if (income > 1000)
		tax = 80.0 + ((double)income - 1000) / 10;
	else
		tax = (double)income * 8 / 100;

	return tax;
}