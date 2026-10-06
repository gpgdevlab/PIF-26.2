#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double PI = 3.14159265;
    double R;
    double area;
    double volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);

    area = 4 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("\nArea da superficie = %.3f\n", area);
    printf("Volume = %.3f\n", volume);

    system("PAUSE");
    return 0;
}
