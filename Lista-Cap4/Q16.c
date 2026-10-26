#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float km, litros, consumo;

    printf("Digite a distância percorrida (km): ");
    scanf("%f", &km);
    printf("Digite a quantidade de gasolina consumida (litros): ");
    scanf("%f", &litros);

    if (km < 0 || litros <= 0) {
        printf("Erro: a distância não pode ser negativa e os litros devem ser maiores que zero!\n");
    } else {
        consumo = km / litros;
        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0) {
            printf("Venda o carro!\n");
        } else if (consumo <= 14.0) {
            printf("Econômico!\n");
        } else {
            printf("Super econômico!\n");
        }
    }

    system("PAUSE");
    return 0;
}
