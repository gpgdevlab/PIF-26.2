#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota, maior = 0.0, menor = 10.0, soma = 0.0, media;
    int quantidade = 0;

    printf("Digite as notas de 0.0 a 10.0 (-1.0 para encerrar).\n");

    do {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota >= 0.0 && nota <= 10.0) {
            if (quantidade == 0) {
                maior = nota;
                menor = nota;
            } else {
                if (nota > maior) maior = nota;
                if (nota < menor) menor = nota;
            }

            soma += nota;
            quantidade++;
        } else if (nota != -1.0) {
            printf("Nota invalida. Digite de 0.0 a 10.0 ou -1.0 para encerrar.\n");
        }
    } while (nota != -1.0);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\nTotal de alunos avaliados: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    } else {
        printf("Nenhum aluno foi avaliado.\n");
    }

    system("PAUSE");
    return 0;
}
