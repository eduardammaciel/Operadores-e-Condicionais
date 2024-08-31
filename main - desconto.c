#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float calcado, percentualdesconto, desconto, total;
    printf ("Digite o valor do calçado: \n");
    scanf ("%f", &calcado);
    printf("Digite o percentual do desconto: \n");
    scanf ("%f", &percentualdesconto);

    desconto = (percentualdesconto/100)*calcado;
    printf ("Desconto: %.3f\n", desconto);
    total = calcado-desconto;
    printf("Valor final: %.3f\n", total);

    return 0;
}
