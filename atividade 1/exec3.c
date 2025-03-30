#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int conta;
    float saldo;
} Conta;

void inserirConta(Conta contas[], int *qtd, int max) {
    if (*qtd == max) return;
    printf("Nome: ");
    scanf(" %[^\n]", contas[*qtd].nome);
    printf("Conta: ");
    scanf("%d", &contas[*qtd].conta);
    printf("Saldo: ");
    scanf("%f", &contas[*qtd].saldo);
    (*qtd)++;
}

void buscarConta(Conta contas[], int qtd, int conta) {
    for (int i = 0; i < qtd; i++) {
        if (contas[i].conta == conta) {
            printf("Conta encontrada: %s, Saldo: %.2f\n", contas[i].nome, contas[i].saldo);
            return;
        }
    }
    printf("Conta não encontrada.\n");
}

void buscarNome(Conta contas[], int qtd, char nome[]) {
    for (int i = 0; i < qtd; i++) {
        if (strcmp(contas[i].nome, nome) == 0) {
            printf("Conta encontrada: %d, Saldo: %.2f\n", contas[i].conta, contas[i].saldo);
            return;
        }
    }
    printf("Nome não encontrado.\n");
}

void percorrerContas(Conta contas[], int qtd) {
    for (int i = 0; i < qtd; i++)
        printf("Nome: %s, Conta: %d, Saldo: %.2f\n", contas[i].nome, contas[i].conta, contas[i].saldo);
}

int main() {
    Conta contas[10];
    int qtd = 0, opcao, num;
    char nome[50];

    do {
        printf("\n1. Inserir Conta\n2. Buscar por Conta\n3. Buscar por Nome\n4. Listar Contas\n0. Sair\nOpção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                inserirConta(contas, &qtd, 10);
                break;
            case 2:
                printf("Digite o número da conta: ");
                scanf("%d", &num);
                buscarConta(contas, qtd, num);
                break;
            case 3:
                printf("Digite o nome: ");
                scanf(" %[^\n]", nome);
                buscarNome(contas, qtd, nome);
                break;
            case 4:
                percorrerContas(contas, qtd);
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
