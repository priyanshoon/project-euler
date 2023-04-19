#include <stdio.h>

int main() {
	int a=1, b=2, s=0, sum=0;
	for (int i = 1; i <= 4000000; i++) {
		s = a + b;
		a = b;
		b = s;
		
		if (s >= 4000000) {
			break;
		}
		
		if (s % 2 == 0) {
			sum += s;
			printf("%d, ", s);
		}
	}

	printf("sum = %d\n", sum+2);

	return 0;
}
