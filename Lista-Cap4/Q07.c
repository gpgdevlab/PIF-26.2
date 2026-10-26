#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x;

    printf("Digite um número real: ");
    if (scanf("%lf", &x) != 1) {
        printf("Entrada inválida!\n");
    } else if (x >= 0) {
        printf("Raiz quadrada de %.2lf = %.4lf\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2lf = %.4lf\n", x, x * x);
    }

    system("PAUSE");
    return 0;
}
