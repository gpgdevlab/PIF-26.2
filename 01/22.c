#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c%c%c%c%c\n", '\xDC', '\xDC', '\xDB', '\xDB', '\xDB', '\xDB', '\xDC', '\xDC');
    printf("%cO%c%c%c%c%cO%c\n\n", '\xDF', '\xDF', '\xDF', '\xDF', '\xDF', '\xDF', '\xDF');
    printf("%c%c%c %c%c%c%c%c%c\n", '\xDC', '\xDC', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB');
    printf("%cO%c%c%c%c%cOO%c\n", '\xDF', '\xDF', '\xDF', '\xDF', '\xDF', '\xDF', '\xDF');

    system("PAUSE");
    return 0;
}