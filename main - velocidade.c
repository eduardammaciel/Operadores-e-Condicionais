#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2;
    printf("Digite uma velociade em km/h: \n");
    scanf ("%f", &v1);
    v2 = v1/3.6;
    printf ("%.3f m/s", v2);
    return 0;
}
