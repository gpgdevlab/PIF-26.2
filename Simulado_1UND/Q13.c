#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N;
    int i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Numero invalido! O fatorial nao existe para numeros negativos.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", N, fatorial);
    }

    system("PAUSE");
    return 0;
}
