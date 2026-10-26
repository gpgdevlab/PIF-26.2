#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char maiuscula;

    printf("Digite uma letra maiúscula (A-Z): ");

    // O espaço antes de %c ignora eventuais 'Enters' e espaços no buffer
    if (scanf(" %c", &maiuscula) == 1) {
        
        // Valida se o caractere está no intervalo das letras maiúsculas na Tabela ASCII
        if (maiuscula >= 'A' && maiuscula <= 'Z') {
            
            // Na Tabela ASCII, a distância entre 'A' (65) e 'a' (97) é exatamente 32.
            // Somar 32 (ou somar 'a' - 'A') desloca a letra maiúscula para a sua versão minúscula.
            char minuscula = maiuscula + 32;

            printf("\nLetra minúscula: %c\n", minuscula);
            printf("ASCII de '%c': %d\n", maiuscula, maiuscula);
            printf("ASCII de '%c': %d\n", minuscula, minuscula);
        } else {
            printf("Erro: O caractere digitado não é uma letra maiúscula válida.\n");
        }
    } else {
        printf("Entrada inválida!\n");
    }

    system("PAUSE");
    return 0;
}