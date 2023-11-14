#include<stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("even()의 결과: %s\n", even(n)==1?"짝수":"홀수");
	printf("absolute()의 결과: %d\n", absolute(n));
	printf("sign()의 결과: %s\n", sign(n)==1?"양수":(sign(n)==0)?"0":"음수");

	return 0;
}

int even(int n) {
	return (absolute(n) % 2 == 0 || absolute(n) == 0);
}

int absolute(int n) {
	return n < 0 ? -n : n;
}
int sign(int n) {
	return n > 0 ? 1 : (n == 0 ? 0 : -1);
}