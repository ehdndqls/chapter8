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
		printf("\n����Ϸ��� y�� �����ÿ�: ");
		scanf_s(" %c", &keep, 1);
	}
	return 0;
}
int menu() {
	int n;
	printf("=====================\nMENU\n=====================\n");
	printf("1. ����\n2. ����\n3. ����\n4. ������\n5. ������\n");
	printf("���ϴ� �޴��� �����Ͻÿ�(1~5): ");
	scanf_s("%d", &n);
	return n;
}
void print_add() {
	int x, y;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);
	printf("������: %d", x+y);
}
void print_sub() {
	int x, y;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);
	printf("������: %d", x-y);
}
void print_mul() {
	int x, y;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);
	printf("������: %d", x*y);
}
void print_div() {
	double x, y;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x, &y);
	printf("������: %lf", x/y);
}
void print_rest() {
	int x, y;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);
	printf("������: %d",x%y);
}