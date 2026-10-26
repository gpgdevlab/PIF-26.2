#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1, num2, num3;
    double media;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("\nA média aritmética dos números informados e: %.2lf\n\n", media);

    system("PAUSE");
    return 0;
}