#include<stdio.h>
int  check_alpha(char ch);

int main() {
	char ch;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();

	if (check_alpha(ch) == 1)
		printf("%c�� ���ĺ� �����Դϴ�.", ch);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", ch);

	return 0;
}

int check_alpha(ch) {
	return (ch >= 97 && ch <= 122);
}