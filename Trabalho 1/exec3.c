#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("A letra %c é uma vogal.\n", letra);
            break;
        default:
            printf("A letra %c é uma consoante.\n", letra);
    }

    return 0;
}
