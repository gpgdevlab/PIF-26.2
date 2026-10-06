#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int SENHA = 2026;
    int senha;
    int tentativas = 0;
    int acesso = 0;

    while (tentativas < 3 && acesso == 0) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == SENHA) {
            acesso = 1;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acesso == 1) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}
