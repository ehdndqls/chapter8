#include<stdio.h>
int is_leap(int year);

int main() {
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	if (is_leap(year) == 1)
		printf("%d���� 366���Դϴ�",year);
	else
		printf("%d���� 365���Դϴ�",year);

	return 0;
}

int is_leap(int year) {
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}