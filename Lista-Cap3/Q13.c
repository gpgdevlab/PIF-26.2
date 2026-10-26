#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro para calcular o fatorial dele: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o fatorial nao existe para numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}
