#include <stdio.h>
#include <Windows.h>
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float e = 2.71828;
    printf("%.3f é um ponto flutuante", e); 
    return 0;

}