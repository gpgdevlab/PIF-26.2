#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &final);

    if (lab < 0 || lab > 10 || semestral < 0 || semestral > 10 || final < 0 || final > 10) {
        printf("Erro: as notas devem estar entre 0.0 e 10.0!\n");
    } else {
        media = (lab * 2 + semestral * 3 + final * 5) / 10.0;
        printf("\nMédia ponderada: %.2f\n", media);

        if (media < 3.0) {
            printf("Situação: Reprovado\n");
        } else if (media < 5.0) {
            printf("Situação: Em Recuperação\n");
        } else {
            printf("Situação: Aprovado\n");
        }
    }

    system("PAUSE");
    return 0;
}
