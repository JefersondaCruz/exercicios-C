#include <stdio.h>

int main() {
    int anos = 0;
    float a = 90000, b = 50000;

    while (b <= a) {
        a *= 1.009;
        b *= 1.015;
        anos++;
    }

    printf("Anos necessários: %d\n", anos);
    return 0;
}
