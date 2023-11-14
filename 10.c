#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int b_rand();
int main() {
	int coin;
	char ch;

	srand(time(NULL));

KEEP:

	printf("앞면 또는 뒷면(1 또는 0): ");
	scanf_s("%d", &coin);

	if (coin == b_rand())
		printf("맞았습니다.\n");
	else
		printf("틀렸습니다.\n");

	printf("계속하시겠습니까?(y 또는 n): ");
	scanf_s(" %c", &ch, 1);

	if (ch == 'y')
		goto KEEP;

	return 0;
}

int b_rand() {
	return rand() % 2;
}