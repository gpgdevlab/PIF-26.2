#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("%-10s %5s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %5s\n", "=========", "=====");
    printf("%-10s %5.1f\n", "ALINE", 9.0);
    printf("%-10s %5s\n",   "MÁRIO", "DEZ");
    printf("%-10s %5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %5.1f\n", "SHIRLEY", 7.0);

    system("PAUSE");
    return 0;
}