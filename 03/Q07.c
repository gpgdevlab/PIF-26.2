#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i;

    printf("VERSAO COM FOR:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nVERSAO COM WHILE:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nVERSAO COM DO-WHILE:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    /*
       O for e o mais adequado neste caso, pois sabemos o inicio,
       a condicao de parada e o incremento da contagem.
    */

    system("PAUSE");
    return 0;
}
