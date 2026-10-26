#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float valor, final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);
    printf("Forma de pagamento:\n");
    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (valor < 0) {
        printf("Erro: valor inválido!\n");
    } else if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("\nValor final a pagar à vista: R$ %.2f\n", final);
        printf("Comissão do vendedor (5%% sobre o valor com desconto): R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3.0;
        comissao = valor * 0.05;
        printf("\nValor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissão do vendedor (5%% sobre o valor total): R$ %.2f\n", comissao);
    } else {
        printf("Erro: opção de pagamento inválida!\n");
    }

    system("PAUSE");
    return 0;
}
