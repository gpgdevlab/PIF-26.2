#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;
    float salario, novoSalario, imposto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000.0) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salario: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000.0) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }

                printf("Desconto de IR: R$ %.2f\n", imposto);
                printf("Salario apos desconto: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
