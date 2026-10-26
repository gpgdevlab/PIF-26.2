#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, c;

    printf("Digite os três ângulos internos (A B C): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: os ângulos não formam um triângulo (soma diferente de 180° ou ângulo inválido)!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo RETÂNGULO.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo OBTUSÂNGULO.\n");
    } else {
        printf("Triângulo ACUTÂNGULO.\n");
    }

    system("PAUSE");
    return 0;
}
