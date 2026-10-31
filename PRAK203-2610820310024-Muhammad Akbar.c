#include <stdio.h>

int main() {
    double buffer[6];
    int count = 0;
    double a, b, i, j, x, y;
    double hasil;

    while (scanf("%lf", &buffer[count]) != EOF) {
    count++;

    if (count == 6) {
        a = buffer[0]; b = buffer[1];
        i = buffer[2]; j = buffer[3];
        x = buffer[4]; y = buffer[5];

    hasil = (a - b) * (i / j) - (x + y);

    printf("Hasil: %.3f\n", hasil);
        count = 0;
        }
    }

    return 0;
}