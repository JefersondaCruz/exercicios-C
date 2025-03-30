#include <stdio.h>

int main() {
    int opcao, idade, filhos, idade_mais_velho;
    char nome[50], cidade[50], conjuge[50], sexo;

    printf("Situação Civil (1-Solteiro, 2-Casado, 3-Divorciado, 4-Viúvo): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Solteiro(a), Idade: %d\n", idade);
            break;
        case 2:
            printf("Digite seu sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Nome do cônjuge: ");
            scanf(" %[^\n]", conjuge);
            printf("Casado(a), Sexo: %c, Cônjuge: %s\n", sexo, conjuge);
            break;
        case 3:
            printf("Quantos filhos você tem? ");
            scanf("%d", &filhos);
            if (filhos > 0) {
                printf("Idade do mais velho: ");
                scanf("%d", &idade_mais_velho);
            }
            printf("Divorciado(a), Filhos: %d, Idade do mais velho: %d\n", filhos, filhos > 0 ? idade_mais_velho : 0);
            break;
        case 4:
            printf("Cidade onde vive: ");
            scanf(" %[^\n]", cidade);
            printf("Salário atual: ");
            scanf("%f", &salario);
            printf("Viúvo(a), Cidade: %s, Salário: R$%.2f\n", cidade, salario);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
