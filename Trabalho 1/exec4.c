#include <stdio.h>

int main() {
    int qtd, regiao;
    float total, frete;

    printf("Quantidade de itens (1 a 100): ");
    scanf("%d", &qtd);
    printf("Código da região (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);

    total = qtd * 5.0;

    switch (regiao) {
        case 1: frete = total * 0.10; printf("Região: Norte\n"); break;
        case 2: frete = total * 0.08; printf("Região: Nordeste\n"); break;
        case 3: frete = total * 0.12; printf("Região: Centro-Oeste\n"); break;
        case 4: frete = total * 0.15; printf("Região: Sudeste\n"); break;
        case 5: frete = total * 0.11; printf("Região: Sul\n"); break;
        default: printf("Código inválido!\n"); return 1;
    }

    printf("Total sem frete: R$%.2f\nTotal com frete: R$%.2f\n", total, total + frete);

    return 0;
}
