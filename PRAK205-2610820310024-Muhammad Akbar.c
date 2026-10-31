#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int tinggi;
    int miring;

    if (scanf("%d %d", &tinggi, &miring) == 2) {
        int alas = (int)sqrt(miring * miring - tinggi * tinggi);
        int keliling = (int)(alas + tinggi + miring);
        int luas = (int)(0.5 * alas * tinggi);

        printf("alas = %d cm\n", alas);
        printf("tinggi = %d cm\n", tinggi);
        printf("keliling = %d cm\n", keliling);
        printf("Luas = %d cm%c%c\n", luas);

    }
    return 0;
}