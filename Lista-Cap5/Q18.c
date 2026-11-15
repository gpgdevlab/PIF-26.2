#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long potencia(int base, int expoente);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int base, expoente;

    printf("Digite a base e um expoente não negativo: ");
    if (scanf("%d %d", &base, &expoente) != 2 || expoente < 0) {
        printf("Entrada inválida: o expoente deve ser não negativo.\n");
        system("PAUSE");
        return 1;
    }

    printf("Resultado: %ld\n", potencia(base, expoente));
    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) { /* Caso base: qualquer base não nula elevada a zero é 1. */
        return 1;
    }

    return base * potencia(base, expoente - 1); /* Passo recursivo. */
}
