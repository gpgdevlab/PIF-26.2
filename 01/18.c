#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    
    // configurar a linguagem de texto para o padrão português
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //variáveis de ponto flutuante
    float preco_lapis = 4.88f;
    float preco_borrachas = 234.54f;
    float preco_canetas = 42.04f;
    float preco_cadernos = 8.00f;
    float preco_fitas = 13.05f;
    
    //dados no console em formato de tabela,
    printf("%-12s%12.2f\n", "Lapis", preco_lapis);
    printf("%-12s%12.2f\n", "Borrachas", preco_borrachas);
    printf("%-12s%12.2f\n", "Canetas", preco_canetas);
    printf("%-12s%12.2f\n", "Cadernos", preco_cadernos);
    printf("%-12s%12.2f\n", "Fitas", preco_fitas);

    system("PAUSE");
    return 0;
}