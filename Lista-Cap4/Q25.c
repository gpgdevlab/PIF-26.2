#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int total, entregue, troco, resto;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &entregue);

    if (total <= 0 || entregue <= 0) {
        printf("Erro: os valores devem ser inteiros positivos!\n");
    } else if (entregue < total) {
        printf("Erro: valor entregue insuficiente! Faltam R$ %d.\n", total - entregue);
    } else {
        troco = entregue - total;
        printf("\nTroco: R$ %d\n", troco);

        resto = troco;
        n100 = resto / 100; resto = resto % 100;
        n50  = resto / 50;  resto = resto % 50;
        n20  = resto / 20;  resto = resto % 20;
        n10  = resto / 10;  resto = resto % 10;
        n5   = resto / 5;   resto = resto % 5;
        n2   = resto / 2;   resto = resto % 2;

        if (n100 > 0) printf("%d cédula(s) de R$ 100\n", n100);
        if (n50 > 0)  printf("%d cédula(s) de R$ 50\n", n50);
        if (n20 > 0)  printf("%d cédula(s) de R$ 20\n", n20);
        if (n10 > 0)  printf("%d cédula(s) de R$ 10\n", n10);
        if (n5 > 0)   printf("%d cédula(s) de R$ 5\n", n5);
        if (n2 > 0)   printf("%d cédula(s) de R$ 2\n", n2);

        if (resto > 0) {
            printf("Restam R$ %d que não podem ser pagos com as cédulas disponíveis (sem cédula de R$ 1).\n", resto);
        }
    }

    system("PAUSE");
    return 0;
}
