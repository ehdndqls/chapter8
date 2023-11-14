#include<stdio.h>
int is_prime(int n);
int main() {
	int i;
		for (i = 2; i <= 100; i++)
			if (is_prime(i) == 1)
				printf("%d ", i);
		return 0;
}

int is_prime(int n) {
	int i;
	if (n == 2)
		return 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}