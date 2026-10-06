#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int valor, cedulas;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor de saque invalido.\n");
    } else {
        if (valor % 2 != 0) {
            printf("Nao e possivel decompor exatamente o valor usando apenas cedulas de 100, 50, 20, 10, 5 e 2.\n");
        } else {
            cedulas = valor / 100;
            printf("Cedulas de R$ 100: %d\n", cedulas);
            valor %= 100;

            cedulas = valor / 50;
            printf("Cedulas de R$ 50: %d\n", cedulas);
            valor %= 50;

            cedulas = valor / 20;
            printf("Cedulas de R$ 20: %d\n", cedulas);
            valor %= 20;

            cedulas = valor / 10;
            printf("Cedulas de R$ 10: %d\n", cedulas);
            valor %= 10;

            cedulas = valor / 5;
            printf("Cedulas de R$ 5: %d\n", cedulas);
            valor %= 5;

            cedulas = valor / 2;
            printf("Cedulas de R$ 2: %d\n", cedulas);
            valor %= 2;

            if (valor != 0) {
                printf("Nao foi possivel decompor todo o valor com as cedulas disponiveis.\n");
            }
        }
    }

    system("PAUSE");
    return 0;
}
