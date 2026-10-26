#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ano;

    printf("Digite um ano (inteiro positivo): ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        printf("Entrada inválida! Digite um ano inteiro positivo.\n");
    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }

    system("PAUSE");
    return 0;
}
