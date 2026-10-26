#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int A, B, i, j, primo, soma = 0;

    printf("Digite um inteiro A: ");
    scanf("%d", &A);

    printf("Digite um iinteio B (maior que A): ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Valores invalidos. Garanta que 0 < A < B.\n");
    } else {
        printf("Primos no intervalo [%d, %d]: ", A, B);

        for (i = A; i <= B; i++) {
            primo = 1;

            if (i < 2) {
                primo = 0;
            } else {
                for (j = 2; j < i; j++) {
                    if (i % j == 0) {
                        primo = 0;
                        break;
                    }
                }
            }

            if (primo) {
                printf("%d ", i);
                soma += i;
            }
        }

        printf("\nSoma dos primos = %d\n", soma);
    }

    system("PAUSE");
    return 0;
}
