#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N, i;
    long long int a = 1, b = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser positivo.\n");
    } else {
        printf("Termos: ");

        if (N >= 1) printf("1 ");
        if (N >= 2) printf("1 ");

        for (i = 3; i <= N; i++) {
            proximo = a + b;
            printf("%lld ", proximo);
            a = b;
            b = proximo;
        }

        if (N == 1) {
            printf("\nTermo %d = 1\n", N);
        } else {
            printf("\nTermo %d = %lld\n", N, b);
        }
    }

    system("PAUSE");
    return 0;
}
