#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define PI 3.14159265358979323846

float area(float r);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float raio;

    printf("Digite o raio da esfera: ");
    if (scanf("%f", &raio) != 1 || raio < 0) {
        printf("Raio inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Área da esfera: %.2f\n", area(raio));
    system("PAUSE");
    return 0;
}

float area(float r) {
    return 4.0f * (float)PI * r * r;
}
