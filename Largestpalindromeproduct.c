#include <stdio.h>

int reverse_num(int n) {
	int d, r=0;

	for (int i = n; i > 0; i=i/10) {
		d = i%10;
		r = r * 10 + d;
	}
	return r;
}

int main() {
	int mul;
	for (int i = 100; i <= 999; i++) {
		for (int j = 100; j <= 999; j++) {
			mul = i*j;
			if (mul == reverse_num(mul)) {
				printf("%d x %d = %d\n", i, j, i*j);
			}
		}
	}
	printf("No further palindrom found!\n");
	return 0;
}