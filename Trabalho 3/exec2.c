#include <stdio.h>

int U(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    return 2 * U(n - 1) - 3 * U(n - 2);
}

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("U(%d) = %d\n", n, U(n));
    return 0;
}
