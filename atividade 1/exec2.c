#include <stdio.h>

void inserirOrdenado(int lista[], int *qtd, int max, int valor) {
    if (*qtd == max) return;
    int i = *qtd - 1;
    while (i >= 0 && lista[i] < valor) {
        lista[i + 1] = lista[i];
        i--;
    }
    lista[i + 1] = valor;
    (*qtd)++;
}

void removerValor(int lista[], int *qtd, int valor) {
    int i, j;
    for (i = 0; i < *qtd; i++) {
        if (lista[i] == valor) {
            for (j = i; j < *qtd - 1; j++)
                lista[j] = lista[j + 1];
            (*qtd)--;
            return;
        }
    }
}

int buscaBinaria(int lista[], int qtd, int valor) {
    int esq = 0, dir = qtd - 1, meio;
    while (esq <= dir) {
        meio = (esq + dir) / 2;
        if (lista[meio] == valor)
            return meio;
        if (lista[meio] > valor)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    return -1;
}

void percorrerLista(int lista[], int qtd) {
    for (int i = 0; i < qtd; i++)
        printf("%d ", lista[i]);
    printf("\n");
}

int main() {
    int lista[10], qtd = 0, opcao, num;
    
    do {
        printf("\n1. Inserir\n2. Remover\n3. Buscar\n4. Percorrer\n0. Sair\nOpção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &num);
                inserirOrdenado(lista, &qtd, 10, num);
                break;
            case 2:
                printf("Digite um número para remover: ");
                scanf("%d", &num);
                removerValor(lista, &qtd, num);
                break;
            case 3:
                printf("Digite um número para buscar: ");
                scanf("%d", &num);
                if (buscaBinaria(lista, qtd, num) != -1)
                    printf("Número encontrado!\n");
                else
                    printf("Número não encontrado.\n");
                break;
            case 4:
                percorrerLista(lista, qtd);
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
