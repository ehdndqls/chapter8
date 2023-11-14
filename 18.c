#include<stdio.h>
void print_add();
void print_sub();
void print_mul();
void print_div();
void print_rest();
int menu();
int main() {
	char keep='y';
	while (keep=='y') {
		switch(menu()){
		case 1: print_add(); break;
		case 2: print_sub(); break;
		case 3: print_mul(); break;
		case 4: print_div(); break;
		case 5: print_rest(); break;
		}
		printf("\n계속하려면 y를 누르시오: ");
		scanf_s(" %c", &keep, 1);
	}
	return 0;
}
int menu() {
	int n;
	printf("=====================\nMENU\n=====================\n");
	printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 나머지\n");
	printf("원하는 메뉴를 선택하시오(1~5): ");
	scanf_s("%d", &n);
	return n;
}
void print_add() {
	int x, y;
	printf("숫자 두개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("연산결과: %d", x+y);
}
void print_sub() {
	int x, y;
	printf("숫자 두개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("연산결과: %d", x-y);
}
void print_mul() {
	int x, y;
	printf("숫자 두개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("연산결과: %d", x*y);
}
void print_div() {
	double x, y;
	printf("숫자 두개를 입력하시오: ");
	scanf_s("%lf %lf", &x, &y);
	printf("연산결과: %lf", x/y);
}
void print_rest() {
	int x, y;
	printf("숫자 두개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("연산결과: %d",x%y);
}