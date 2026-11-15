#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPar(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Digite um número inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    if (ehPar(n)) {
        printf("%d é par.\n", n);
    } else {
        printf("%d é ímpar.\n", n);
    }

    system("PAUSE");
    return 0;
}

int ehPar(int n) {
    return n % 2 == 0;
}
