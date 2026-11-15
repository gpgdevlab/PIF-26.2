#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preço do produto: ");
    if (scanf("%f", &preco) != 1 || preco < 0) {
        printf("Preço inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Digite a quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 0) {
        printf("Quantidade inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("Forma de pagamento (1 - à vista com desconto; 2 - outras): ");
    if (scanf("%d", &opcaoPagamento) != 1 ||
        (opcaoPagamento != 1 && opcaoPagamento != 2)) {
        printf("Opção de pagamento inválida!\n");
        system("PAUSE");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: R$ ");
    if (scanf("%f", &pago) != 1 || pago < total) {
        printf("Valor pago inválido ou insuficiente.\n");
        system("PAUSE");
        return 1;
    }

    troco = calculaTroco(total, pago);
    printf("Troco: R$ %.2f\n", troco);

    system("PAUSE");
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
