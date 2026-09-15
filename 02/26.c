#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preço por metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    float perimetro = 2 * (comprimento + largura);
    float total_arame = perimetro * 3;
    float custo_total = total_arame * preco_metro;

    printf("\nMetros de arame a comprar: %.2f m\n", total_arame);
    printf("Custo total da compra: R$ %.2f\n", custo_total);

    system("PAUSE");
    return 0;
}