#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Inicializa o gerador de números aleatórios com a hora atual
    srand((unsigned int)time(NULL));

    // A expressão (rand() % 6) retorna 0 a 5; somar 1 ajusta o intervalo para 1 a 6
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;

    printf("Lançamento do Dado 1: %d\n", dado1);
    printf("Lançamento do Dado 2: %d\n", dado2);
    printf("Lançamento do Dado 3: %d\n", dado3);

    system("PAUSE");
    return 0;
}