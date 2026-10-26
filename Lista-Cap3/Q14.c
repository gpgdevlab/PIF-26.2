#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i;
    long long int soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += (long long int)i * i;
    }

    printf("\nSoma total dos quadrados = %lld\n", soma);

    system("PAUSE");
    return 0;
}
