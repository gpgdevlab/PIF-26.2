#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &total_segundos);
    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("\n%d segundos correspondem a:\n", total_segundos);
    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n\n", horas, minutos, segundos);

    system("PAUSE");
    return 0;
}