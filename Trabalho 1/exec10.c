#include <stdio.h>

int main() {
    int n, num, maior;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    printf("Digite um número: ");
    scanf("%d", &maior);

    for (int i = 1; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > maior) maior = num;
    }

    printf("Maior número: %d\n", maior);
    return 0;
}
