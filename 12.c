#include<stdio.h>
int print_value(int n);
int main() {
	int n;
	
	while (1) {
		printf("���� �Է��Ͻÿ�(����� ����): ");
		scanf_s("%d", &n);
		if (print_value(n) == EOF)
			break;
	}
	return 0;
}

int print_value(int n) {
	int i;
	if (n < 0)
		return EOF;
	for (i = 0; i < n; i++)
		printf("*");
	printf("\n");
	return 0;
}