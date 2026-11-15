#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Descomente a linha abaixo para ativar a depuração nesta compilação. */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Valor inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Soma de 1 até %d: %d\n", n, somaAteN(n));
    system("PAUSE");
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] Depois de somar %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

/*
Sem DEBUG, as mensagens parciais não entram no programa.
Com DEBUG definido, elas são incluídas durante o pré-processamento.
Para testar com GCC:
gcc Q24.c -o Q24_normal
gcc -DDEBUG Q24.c -o Q24_debug
*/
