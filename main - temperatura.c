#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Celsius, Fahrenheit;
    printf("Digite a temperatura que está nesse momento: \n");
    scanf ("%f", &Celsius);
    printf ("%.0f°C\n", &Celsius);
    Fahrenheit = Celsius * 1.8 + 32;
    printf ("%.0f°F", &Fahrenheit);



    return 0;
}
