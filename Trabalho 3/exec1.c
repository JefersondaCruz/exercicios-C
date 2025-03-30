#include <stdio.h>

int S(int n) {
    if (n == 0)
        return 1;
    return 2 * S(n - 1) + 1;
}

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("S(%d) = %d\n", n, S(n));
    return 0;
}
