#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int mes, ano, dias = 0;
    char *nome = "";

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1:  nome = "Janeiro";   dias = 31; break;
        case 2:
            nome = "Fevereiro";
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3:  nome = "Março";     dias = 31; break;
        case 4:  nome = "Abril";     dias = 30; break;
        case 5:  nome = "Maio";      dias = 31; break;
        case 6:  nome = "Junho";     dias = 30; break;
        case 7:  nome = "Julho";     dias = 31; break;
        case 8:  nome = "Agosto";    dias = 31; break;
        case 9:  nome = "Setembro";  dias = 30; break;
        case 10: nome = "Outubro";   dias = 31; break;
        case 11: nome = "Novembro";  dias = 30; break;
        case 12: nome = "Dezembro";  dias = 31; break;
        default:
            printf("Erro: mês inválido! Digite um valor de 1 a 12.\n");
    }

    if (dias > 0) {
        printf("%s de %d possui %d dias.\n", nome, ano, dias);
    }

    system("PAUSE");
    return 0;
}
