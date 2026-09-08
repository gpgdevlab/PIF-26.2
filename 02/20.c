#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lado_a, lado_b;
    printf("digite os lados A e B dos catetos do triângulo(separados por um espaço): ");
   

    if (scanf("%f %f", &lado_a, &lado_b) == 2) { 
       float hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);
       printf("O valor da hipotenusa de uma triângulo cujos os catetos são %.2f e %.2f é: %.2f\n", lado_a, lado_b, hipotenusa);
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}