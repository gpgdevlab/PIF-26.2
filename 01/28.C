#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    double media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("\nA media aritmetica dos numeros informados e: %.2lf\n\n", media);

    system("PAUSE");
    return 0;
}