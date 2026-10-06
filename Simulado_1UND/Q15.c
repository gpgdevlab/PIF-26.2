#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N;
    int i;
    int j;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}
