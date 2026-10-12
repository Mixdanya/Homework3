
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    SetConsoleOutputCP(65001);
    double bits, kbytes;

    printf("Введите пропускную способность в бит/с: ");
    scanf("%lf", &bits);
    kbytes = bits / 8192.0;

    printf("Результат: %.4lf Кбайт/с\n", kbytes);
    double kbytes2, bits2;

    printf("Введите пропускную способность в Кбайт/с: ");
    scanf("%lf", &kbytes2);
    bits2 = kbytes2 * 8192.0;
    printf("Результат: %.4lf бит/с\n", bits2);
}