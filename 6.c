#include<stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("even()�� ���: %s\n", even(n)==1?"¦��":"Ȧ��");
	printf("absolute()�� ���: %d\n", absolute(n));
	printf("sign()�� ���: %s\n", sign(n)==1?"���":(sign(n)==0)?"0":"����");

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