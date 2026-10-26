#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float salario, percentual, aumento;
    int cargo;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico; 2 = Gerente; 3 = Demais cargos): ");
    scanf("%d", &cargo);

    if (salario < 0) {
        printf("Erro: salário inválido!\n");
    } else if (cargo < 1 || cargo > 3) {
        printf("Erro: código de cargo inválido!\n");
    } else {
        if (cargo == 1) {
            percentual = (salario <= 3000) ? 15.0 : 10.0;
        } else if (cargo == 2) {
            percentual = (salario <= 5000) ? 10.0 : 5.0;
        } else {
            percentual = 8.0;
        }

        aumento = salario * percentual / 100.0;
        printf("\nReajuste aplicado: %.0f%%\n", percentual);
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salário: R$ %.2f\n", salario + aumento);
    }

    system("PAUSE");
    return 0;
}
