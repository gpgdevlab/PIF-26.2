#include <stdio.h>
#include <Windows.h>

int main() {
    // configurar a linguagem de texto para o padrão português
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("um\n\tdois\n\t\ttrês\n"); //chamada da função printf
    return 0;
}