#include <stdio.h>

int main() {
    int bilangan;

    // Meminta input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan GENAP\n", bilangan);
    } else {
        printf("%d adalah bilangan GANJIL\n", bilangan);
    }

    return 0;
}
