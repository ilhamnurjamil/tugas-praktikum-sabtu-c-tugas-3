#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur;

    // Meminta input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    // Konversi ke Fahrenheit
    fahrenheit = (celcius * 9/5) + 32;

    // Konversi ke Reamur
    reamur = celcius * 4/5;

    // Menampilkan hasil konversi
    printf("%.2f derajat Celcius setara dengan:\n", celcius);
    printf("%.2f derajat Fahrenheit\n", fahrenheit);
    printf("%.2f derajat Reamur\n", reamur);

    return 0;
}
