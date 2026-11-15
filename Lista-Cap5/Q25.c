#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;

    printf("Digite numerador e denominador positivos: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Valores inválidos!\n");
        system("PAUSE");
        return 1;
    }

    printf("MDC: %d\n", mdc(a, b));
    simplifica(a, b);

    system("PAUSE");
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) { /* Caso base do algoritmo de Euclides. */
        return a;
    }

    return mdc(b, a % b); /* Passo recursivo. */
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);

    printf("Fração simplificada: %d/%d\n", num / divisor, den / divisor);
}
