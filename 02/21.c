#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char caractere;

    printf("Digite um caractere: ");

    // O espaço antes de %c ignora eventuais espaços ou 'Enter' pendentes no buffer de entrada
    if (scanf(" %c", &caractere) == 1) {
        
        /* 
         * EXPLICAÇÃO SOBRE O CÓDIGO ASCII:
         * Na linguagem C, o tipo 'char' é um tipo inteiro de 1 byte (8 bits) armazenado na memória.
         * Quando exibimos a variável com a especificação '%c', o terminal desenha o símbolo gráfico 
         * correspondente. Quando usamos a especificação '%d', o programa exibe o valor numérico inteiro 
         * (código ASCII) associado a esse caractere (por exemplo, 'A' é armazenado como 65, 'a' como 97).
         */

        printf("\nCaractere lido: %c\n", caractere);
        printf("Código ASCII (valor inteiro): %d\n", caractere);
    } else {
        printf("Entrada inválida!\n");
    }

    system("PAUSE");
    return 0;
}