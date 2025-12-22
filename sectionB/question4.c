#include <stdio.h>

int fact(int n) {
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n = 4;
    int result;

    result = fact(n);
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
