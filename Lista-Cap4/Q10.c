#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Digite um número inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida!\n");
    } else {
        if (n % 2 == 0) {
            printf("O número %d é PAR.\n", n);
        } else {
            printf("O número %d é ÍMPAR.\n", n);
        }

        if (n > 0) {
            printf("O número %d é POSITIVO.\n", n);
        } else if (n < 0) {
            printf("O número %d é NEGATIVO.\n", n);
        } else {
            printf("O número é ZERO.\n");
        }
    }

    system("PAUSE");
    return 0;
}
