#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int b_rand();
int main() {
	int coin;
	char ch;

	srand(time(NULL));

KEEP:

	printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
	scanf_s("%d", &coin);

	if (coin == b_rand())
		printf("�¾ҽ��ϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�.\n");

	printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
	scanf_s(" %c", &ch, 1);

	if (ch == 'y')
		goto KEEP;

	return 0;
}

int b_rand() {
	return rand() % 2;
}