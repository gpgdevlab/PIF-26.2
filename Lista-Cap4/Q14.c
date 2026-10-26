#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0 || nota > 10.0 || faltas < 0) {
        printf("Erro: nota deve estar entre 0.0 e 10.0 e faltas não pode ser negativa!\n");
    } else {
        if (nota >= 9.0) {
            conceito = (faltas <= 20) ? 'A' : 'B';
        } else if (nota >= 7.5) {
            conceito = (faltas <= 20) ? 'B' : 'C';
        } else if (nota >= 5.0) {
            conceito = (faltas <= 20) ? 'C' : 'D';
        } else if (nota >= 4.0) {
            conceito = (faltas <= 20) ? 'D' : 'E';
        } else {
            conceito = 'E';
        }

        printf("Conceito: %c\n", conceito);
    }

    system("PAUSE");
    return 0;
}
