#include <stdio.h>

int V(int n) {
    if (n == 0 || n == 1)
        return 1;
    if (n % 2 == 0)
        return 2 * V(n - 1) - V(n - 2);
    else
        return V(n - 1) - 2 * V(n - 2);
}

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("V(%d) = %d\n", n, V(n));
    return 0;
}
