#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;

    for (int i = 0; i < 20; i++) {
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' && idade > 21) {
            printf("Nome: %s\n", nome);
        }
    }

    return 0;
}
