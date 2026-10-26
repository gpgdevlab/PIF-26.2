#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) == 1) {
        int quadrado = numero * numero;

        double decima_parte = numero / 10.0;

        printf("a) Quadrado: %d\n", quadrado);
        printf("b) Decima parte: %.2f\n", decima_parte);
    } else {
        printf("Entrada invalida! Digite um numero inteiro valido.\n");
    }
    system("PAUSE");
    return 0;
}