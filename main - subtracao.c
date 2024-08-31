#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, res;
    printf("Digite um valor: \n");
    scanf("%f",&a);
    printf("Digite outro valor: \n");
    scanf("%f", &b);

    res = a - b;
    printf("resultado: %f\n", res);

    if (res >= 0){
        printf("Positivo\n");
    }else {
        printf("Negativo\n");
    }
    return 0;
}
