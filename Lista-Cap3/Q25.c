#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                divisores++;
            }
        }

        printf("Quantidade de divisores: %d\n", divisores);

        if (N > 1 && divisores == 2) {
            printf("%d e primo.\n", N);
        } else {
            printf("%d nao e primo.\n", N);
        }
    }

    system("PAUSE");
    return 0;
}
