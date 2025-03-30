#include <stdio.h>

int main() {
    int inicio, fim;
    printf("Digite o intervalo (início e fim em polegadas): ");
    scanf("%d %d", &inicio, &fim);

    for (int i = inicio; i <= fim; i++) {
        printf("%d polegadas = %.2f cm\n", i, i * 2.54);
    }
    
    return 0;
}
