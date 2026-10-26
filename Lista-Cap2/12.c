#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) == 1) {
        int antecessor = numero;
        int sucessor = numero;

        antecessor--;
        sucessor++;

        printf("Antecessor: %d\n", antecessor);
        printf("Sucessor: %d\n", sucessor);
    } else {
        printf("Entrada invalida! Por favor, digite um numero inteiro.\n");
    }
    system("PAUSE");
    return 0;
}