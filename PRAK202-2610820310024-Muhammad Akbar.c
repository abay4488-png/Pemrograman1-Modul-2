#include <stdio.h>

int main() {
    double nilai1, nilai2, hasil;
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &nilai1);

    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &nilai2);
    hasil = nilai1 + nilai2;

    if (nilai1 == (int)nilai1) {
        if (nilai2 == (int)nilai2) {
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%d\" adalah \"%.0f\"\n", 
            (int)nilai1, (int)nilai2, hasil);
        } else {
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", 
            (int)nilai1, nilai2, hasil);
        }
    } else {
        if (nilai2 == (int)nilai2) {
        printf("Hasil dari penjumlahan nilai pertama \"%.1f\" dan nilai kedua \"%d\" adalah \"%.0f\"\n", 
            nilai1, (int)nilai2, hasil);
        } else {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", 
            nilai1, nilai2, hasil);
        
    }
    return 0;
}