#include <stdio.h>

int main() {
    float r, t;
    float phi = 3.142857f;
    int count;
    count = scanf("%f %f", &r, &t);

    if (count < 2) {
        scanf("%f", &t);
    }
    float volume = phi * (r * r) * t;
    float luas = 2 * phi * r * (r + t);
    float keliling = 2 * phi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}