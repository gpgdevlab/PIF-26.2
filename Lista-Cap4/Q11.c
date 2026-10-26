#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, c, aux;

    printf("Digite três números inteiros (separados por espaço): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada inválida!\n");
    } else {
        /* Troca os valores para que a <= b <= c, sem usar vetores */
        if (a > b) {
            aux = a;
            a = b;
            b = aux;
        }
        if (b > c) {
            aux = b;
            b = c;
            c = aux;
        }
        if (a > b) {
            aux = a;
            a = b;
            b = aux;
        }

        printf("Ordem crescente: %d, %d, %d\n", a, b, c);
    }

    system("PAUSE");
    return 0;
}
