#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somaDigitos(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Número inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Soma dos dígitos: %d\n", somaDigitos(n));
    system("PAUSE");
    return 0;
}

int somaDigitos(int n) {
    if (n < 10) { /* Caso base: resta apenas um dígito. */
        return n;
    }

    return (n % 10) + somaDigitos(n / 10); /* Passo recursivo. */
}
