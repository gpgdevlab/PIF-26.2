#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio;
    const float pi = 3.141593;
    printf("digite o valor do raio da esfera: ");
   

    if (scanf("%f", &raio) == 1) { 
        float area_superficie = 4 * pi * raio * raio;
        float volume = (4.0/3.0) * pi * raio * raio * raio;
        printf("a) Área da superfície: %.2f\n", area_superficie);
        printf("b) Volume da esfera: %.2f\n", volume);
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}