#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int senhaSecreta = 2026;
    int senha, tentativa;
    int acertou = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Numero de tentativas utilizadas: %d\n", tentativa);
            acertou = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (!acertou) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}
