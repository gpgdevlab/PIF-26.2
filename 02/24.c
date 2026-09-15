#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    if (scanf("%f", &kmh) == 1) {
        ms = kmh / 3.6f;
        printf("Velocidade convertida: %.2f m/s\n", ms);
    }

    system("PAUSE");
    return 0;
}