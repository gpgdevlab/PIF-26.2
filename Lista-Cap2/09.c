#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &num1) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &num2) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    
    if (num2 != 0) {
        float divisao = (float)num1 / num2;
        printf("Divisao real: %.2f\n", divisao);
    } else {
        printf("Divisao real: Erro! Nao e possivel dividir por zero.\n");
    }
    system("PAUSE");
    return 0;
}