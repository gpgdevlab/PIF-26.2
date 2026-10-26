#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int codigo;

    printf("Decimal\tHexa\tCaractere\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%3d\t%2X\t%c\n", codigo, codigo, codigo);
    }

    system("PAUSE");
    return 0;
}
