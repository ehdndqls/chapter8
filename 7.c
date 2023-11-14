#include<stdio.h>
double get_tax(int income);

int main() {
	int income;
	printf("소득을 입력하시오(만원): ");
	scanf_s("%d", &income);

	printf("소득세는 %.lf입니다", get_tax(income));

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