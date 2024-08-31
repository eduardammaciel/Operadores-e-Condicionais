#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, largura, perimetro, area;
    printf("Digite o valor da altura do retangulo: \n");
    scanf("%f", &altura);
    printf("Digite o valor da largura do retangulo: \n");
    scanf("%f", &largura);
    perimetro = 2*(altura+largura);
    printf("Perimetro do retangulo: %.3f\n", perimetro);
    area = altura*largura;
    printf("Area do retangulo: %.3f\n", area);


    return 0;
}
