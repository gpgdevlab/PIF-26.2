#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio;
    const float pi = 3.141593;
    printf("digite o valor do raio do circulo: ");
   

    if (scanf("%f", &raio) == 1) { 
        float area = pi * raio * raio;
        float circunferencia = 2 * pi * raio;
        printf("a) Área do circulo: %.2f\n", area);
        printf("b) Valor da circunferencia: %.2f\n", circunferencia); 
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}