#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero, original, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Digite um numero inteiro positivo.\n");
    } else {
        original = numero;

        while (numero > 0) {
            digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero /= 10;
        }

        printf("Numero original: %d\n", original);
        printf("Numero invertido: %d\n", invertido);
    }

    system("PAUSE");
    return 0;
}
