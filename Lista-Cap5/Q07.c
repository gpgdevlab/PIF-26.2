#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int soma(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;

    printf("Escreva dois números inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("O resultado da soma é: %d\n", soma(a, b));
    system("PAUSE");
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
