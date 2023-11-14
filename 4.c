#include<stdio.h>
int is_leap(int year);

int main() {
	int year;
	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	if (is_leap(year) == 1)
		printf("%d년은 366일입니다",year);
	else
		printf("%d년은 365일입니다",year);

	return 0;
}

int is_leap(int year) {
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}