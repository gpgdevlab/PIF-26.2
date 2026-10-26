#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N, i, j;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensao invalida. Digite um numero impar entre 3 e 19.\n");
    } else {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (j == i || j == N - 1 - i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}
