#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define DOBRO(x) x * 2

int dobro(int x);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("Macro sem proteção DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Função dobro(2+3): %d\n", dobro(2+3));

    /* A macro vira 2+3*2, que resulta em 8; a função recebe 5 e retorna 10. */
    /* A forma corrigida protege o argumento e a expressão completa. */
#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));

    system("PAUSE");
    return 0;
}

int dobro(int x) {
    return x * 2;
}
