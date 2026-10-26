#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int A, B, i;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &A);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &B);

    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;
}
