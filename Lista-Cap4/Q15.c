#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade, tempo;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempo);

    if (idade < 0 || tempo < 0) {
        printf("Erro: valores inválidos!\n");
    } else if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NÃO pode se aposentar ainda.\n");
    }

    system("PAUSE");
    return 0;
}
