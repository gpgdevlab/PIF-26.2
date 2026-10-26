#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int h, m, s, duracao;

    printf("Digite o horário inicial (Horas Minutos Segundos): ");
    if (scanf("%d %d %d", &h, &m, &s) == 3) {
        printf("Digite a duração do experimento (em segundos): ");
        if (scanf("%d", &duracao) == 1) {

            // Converte todo o horário inicial e duração para segundos totais
            int total_segundos = (h * 3600 + m * 60 + s + duracao) % 86400;

            // Extrai as novas horas, minutos e segundos via divisão e resto
            int h_fim = total_segundos / 3600;
            int m_fim = (total_segundos % 3600) / 60;
            int s_fim = total_segundos % 60;

            printf("\nHorário exato de término: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
        }
    }

    system("PAUSE");
    return 0;
}