#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void exibeMenu(void);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;

    exibeMenu();
    printf("Escolha uma opção: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Opção Cadastrar selecionada.\n");
            break;
        case 2:
            printf("Opção Listar selecionada.\n");
            break;
        case 3:
            printf("Opção Remover selecionada.\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    system("PAUSE");
    return 0;
}

void exibeMenu(void) {
    printf("\n===== MENU =====\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
