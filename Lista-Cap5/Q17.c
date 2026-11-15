#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    long iterativo, recursivo;

    printf("Digite um inteiro de 0 a 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Valor inválido para este exemplo.\n");
        system("PAUSE");
        return 1;
    }

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);
    printf("Os resultados %s.\n", iterativo == recursivo ? "coincidem" : "não coincidem");

    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n <= 1) { /* Caso base. */
        return 1;
    }

    return n * fatorialRecursivo(n - 1); /* Passo recursivo. */
}
