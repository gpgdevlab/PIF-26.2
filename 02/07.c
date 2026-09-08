#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int dia, mes, ano;

    printf("Digite uma data no formato (dd/mm/aaaa): ");
    
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {
        // %04d e %02d preenche com zeros na esquerda 
        printf("Data no formato invertido: %04d/%02d/%02d\n", ano, mes, dia);
    } else {
        printf("Entrada inválida! Certifique-se de usar o formato dd/mm/aaaa.\n");
    }
    system("PAUSE");
    return 0;
}