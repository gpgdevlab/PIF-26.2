#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int NUM, i, encontrou = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &NUM);

    if (NUM < 1) {
        printf("O limite deve ser positivo.\n");
    } else {
        for (i = 1; i <= NUM; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                printf("%d ", i);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Nenhum numero satisfaz a condicao.");
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}
