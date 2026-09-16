#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    if (scanf("%d", &num) == 1) {
        printf("Decimal: %d | Hexa: %x | Octal: %o | ASCII: %c\n", num, num, num, num);
    }
    system("PAUSE");
    return 0;
}