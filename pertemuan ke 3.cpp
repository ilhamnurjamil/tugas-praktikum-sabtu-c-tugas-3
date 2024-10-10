#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisiMiring, luas, keliling;

    // Input panjang alas dan tinggi
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);

    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Hitung sisi miring (menggunakan teorema Pythagoras)
    sisiMiring = sqrt(alas*alas + tinggi*tinggi);

    // Hitung luas
    luas = 0.5 * alas * tinggi;

    // Hitung keliling
    keliling = alas + tinggi + sisiMiring;

    // Tampilkan hasil
    printf("\nLuas segitiga: %.2f cm²\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}
