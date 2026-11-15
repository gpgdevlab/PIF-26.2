#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    if (scanf("%f %f %f", &n1, &n2, &n3) != 3) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    media = mediaPonderada(n1, n2, n3);
    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    system("PAUSE");
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Em Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
}
