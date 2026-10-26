#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float a, b, c, delta, x1, x2;

    do {
        printf("Digite os coeficientes a, b e c (a diferente de zero): ");
        scanf("%f %f %f", &a, &b, &c);
        if (a == 0) {
            printf("Erro: o coeficiente a não pode ser zero!\n");
        }
    } while (a == 0);

    delta = b * b - 4 * a * c;
    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    system("PAUSE");
    return 0;
}
