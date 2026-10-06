#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int c;
    float fahrenheit, kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (c = 0; c <= 100; c += 5) {
        fahrenheit = (9.0 * c) / 5.0 + 32.0;
        kelvin = c + 273.15;
        printf("%3d\t%10.2f\t%7.2f\n", c, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}
