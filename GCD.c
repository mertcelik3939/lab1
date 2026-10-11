#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48;
    int b = 18;
    printf("The GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}