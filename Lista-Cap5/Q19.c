#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int atual, int limite);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;

    printf("Digite um número positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("Contagem crescente:\n");
    contagemCrescente(1, n);

    system("PAUSE");
    return 0;
}

void contagem(int n) {
    if (n <= 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int atual, int limite) {
    if (atual > limite) {
        return;
    }

    printf("%d\n", atual);
    contagemCrescente(atual + 1, limite);
}

/*
Na contagem regressiva, o printf acontece antes da chamada recursiva,
então os números aparecem na ordem em que as chamadas são empilhadas.
Para imprimir em ordem crescente com a mesma ideia (descer até o caso
base), o printf ficaria depois da chamada recursiva; assim, os números
apareceriam no desempilhamento. Aqui, a contagemCrescente faz o
caminho inverso: começa em 1 e sobe até o limite.
*/
