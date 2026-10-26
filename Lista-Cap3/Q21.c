#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char secreta, tentativa;
    int tentativas = 0;

    secreta = (char)('a' + rand() % 26);

    do {
        printf("Digite uma letra minuscula entre a e z: ");
        scanf(" %c", &tentativa);
        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (tentativa != secreta);

    system("PAUSE");
    return 0;
}
