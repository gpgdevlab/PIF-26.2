#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float valor, soma = 0.0, media;
    int quantidade = 0;

    do {
        printf("Digite um valor positivo (negativo para encerrar): ");
        scanf("%f", &valor);

        if (valor >= 0.0) {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0.0);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    system("PAUSE");
    return 0;
}
