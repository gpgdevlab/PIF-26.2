#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;

    printf("Digite dois números inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("Maior número: %d\n", maior(a, b));
    system("PAUSE");
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
