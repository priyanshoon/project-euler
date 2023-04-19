#include <stdio.h>

void primeFactors(long long int n) {
    for (int i = 2; i <= n; i++) {
        if (n%i == 0) {
            while (n%i == 0) {
                n = n/i;
            }
            printf("%d ", i);
        }
    }
}

int main() {
	primeFactors(600851475143);
	return 0;
}