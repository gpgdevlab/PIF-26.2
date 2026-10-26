#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}
