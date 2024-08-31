#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius, Fahrenheit;
    printf("Digite uma temperatura: \n");
    scanf ("%f", &Fahrenheit);
    printf("%.0f°F\n", Fahrenheit);
    Celsius = (Fahrenheit - 32) / 1.8;
    printf("%.0f°C", Celsius);

    return 0;
}
