#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int L, i, j;

    printf("Digite a dimensao do quadrado (3 a 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Dimensao invalida.\n");
    } else {
        for (i = 1; i <= L; i++) {
            for (j = 1; j <= L; j++) {
                if (i == 1 || i == L || j == 1 || j == L) {
                    printf("X");
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
