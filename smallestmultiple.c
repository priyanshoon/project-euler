#include<stdio.h>

int isDivisible1to20(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 1;
    while (isDivisible1to20(n) != 1) {
        n++;
    }
    printf("%d\n", n);
	return 0;
}
