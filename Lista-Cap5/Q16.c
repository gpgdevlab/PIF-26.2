#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehBissexto(int ano);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ano;

    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        printf("Ano inválido!\n");
        system("PAUSE");
        return 1;
    }

    if (ehBissexto(ano)) {
        printf("%d é bissexto.\n", ano);
    } else {
        printf("%d não é bissexto.\n", ano);
    }

    system("PAUSE");
    return 0;
}

int ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}
