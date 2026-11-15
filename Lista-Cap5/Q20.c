#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPrimo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, i;

    printf("Digite um inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    if (ehPrimo(n)) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }

    printf("Números primos de 1 até 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
