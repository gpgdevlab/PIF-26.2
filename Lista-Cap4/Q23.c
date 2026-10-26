#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dia, mes, ano;

    printf("Digite a data (dia mês ano, ex: 25 12 2026): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: mês inválido! Digite um valor de 1 a 12.\n");
    } else if (dia < 1 || dia > 31) {
        printf("Erro: dia inválido!\n");
    } else {
        printf("%d de ", dia);
        switch (mes) {
            case 1:  printf("janeiro");   break;
            case 2:  printf("fevereiro"); break;
            case 3:  printf("março");     break;
            case 4:  printf("abril");     break;
            case 5:  printf("maio");      break;
            case 6:  printf("junho");     break;
            case 7:  printf("julho");     break;
            case 8:  printf("agosto");    break;
            case 9:  printf("setembro");  break;
            case 10: printf("outubro");   break;
            case 11: printf("novembro");  break;
            case 12: printf("dezembro");  break;
        }
        printf(" de %d\n", ano);
    }

    system("PAUSE");
    return 0;
}
