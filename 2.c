#include<stdio.h>
int  check_alpha(char ch);

int main() {
	char ch;
	
	printf("문자를 입력하시오: ");
	ch = getchar();

	if (check_alpha(ch) == 1)
		printf("%c는 알파벳 문자입니다.", ch);
	else
		printf("%c는 알파벳 문자가 아닙니다.", ch);

	return 0;
}

int check_alpha(ch) {
	return (ch >= 97 && ch <= 122);
}