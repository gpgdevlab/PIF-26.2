#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int horas;
    float total;

    printf("Digite o número de horas de permanência: ");
    scanf("%d", &horas);

    if (horas < 1) {
        printf("Erro: o tempo mínimo é de 1 hora!\n");
    } else {
        if (horas <= 2) {
            total = horas * 2.00;
        } else if (horas <= 4) {
            total = 2 * 2.00 + (horas - 2) * 2.50;
        } else {
            total = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
        }

        printf("Tempo total: %d hora(s)\n", horas);
        printf("Valor do ticket: R$ %.2f\n", total);
    }

    system("PAUSE");
    return 0;
}
