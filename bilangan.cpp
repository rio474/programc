#include <stdio.h>

int main() {
    int decimalNumber;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimalNumber);

    printf("Bilangan dalam format heksadesimal: %X\n", decimalNumber);

    return 0;
}
