#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado_quadrado;
    float base_retangulo, altura_retangulo;
    float base_triangulo, altura_triangulo;

    printf("--- Calculo de Areas ---\n\n");

    // a) Quadrado
    printf("Digite o lado do quadrado (L): ");
    if (scanf("%f", &lado_quadrado) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    // b) Retângulo
    printf("Digite a base (B) e a altura (H) do retangulo: ");
    if (scanf("%f %f", &base_retangulo, &altura_retangulo) != 2) {
        printf("Entrada invalida!\n");
        return 1;
    }

    // c) Triângulo Retângulo
    printf("Digite a base (B) e a altura (H) do triangulo retangulo: ");
    if (scanf("%f %f", &base_triangulo, &altura_triangulo) != 2) {
        printf("Entrada invalida!\n");
        return 1;
    }

    // Cálculos
    float area_quadrado = lado_quadrado * lado_quadrado;
    float area_retangulo = base_retangulo * altura_retangulo;
    float area_triangulo = (base_triangulo * altura_triangulo) / 2.0f;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("a) Area do quadrado: %.2f\n", area_quadrado);
    printf("b) Area do retangulo: %.2f\n", area_retangulo);
    printf("c) Area do triangulo retangulo: %.2f\n", area_triangulo);
    system("PAUSE");
    return 0;
}