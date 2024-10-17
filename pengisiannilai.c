#include <stdio.h>

int main() {
    int a,b;

    a = 5;
    b = 10;

    b += a;
    printf("Hasil b += a adalah %d\n", b);

    b -= a;
    printf("Hasil b -= a adalah %d\n", b);

    b *= a;
    printf("Hasil b *= a adalah %d\n", b);

    b /= a;
    printf("Hasil b /= a adalah %d\n", b);

    b %= a;
    printf("Hasil b %= a adalah %d\n", b);
}