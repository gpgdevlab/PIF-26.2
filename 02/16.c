#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float altura_degrau, altura_desejada;
    printf("a altura de cada degrau (em centímetros) e depois a altura total que o usuário deseja alcançar subindo a escada (em metros)[separadas por um espaço]: ");
   

    if (scanf("%f %f", &altura_degrau, &altura_desejada) == 2) { 
       altura_desejada = altura_desejada * 100;
       int qnt_degraus = altura_desejada / altura_degrau;
       printf("Número mínimo de degraus a subir: %d\n", qnt_degraus);   
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}