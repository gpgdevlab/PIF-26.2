#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fibonacci(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int quantidade, i;

    printf("Quantos termos deseja (1 a 40)? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 40) {
        printf("Quantidade inválida para este exemplo.\n");
        system("PAUSE");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    system("PAUSE");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) { /* Primeiro caso base. */
        return 0;
    }
    if (n == 1) { /* Segundo caso base. */
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2); /* Passo recursivo. */
}

/*
A versão recursiva simples repete muitos cálculos: os mesmos termos sao
calculados varias vezes. Por isso, o tempo de execução cresce rapidamente
quando n aumenta.
*/
