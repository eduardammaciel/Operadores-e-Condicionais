#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso, imc;
    printf ("digite a sua altura: ");
    scanf ("%f", &altura);
    printf("digite o seu peso: ");
    scanf ("%f", &peso);
    imc = peso/(altura*altura);
    printf("%f", imc);

    //verificar se o IMC está correto
    if (imc < 18.5){
        printf("O IMC esta acima do ideal.\n");
    }else if (imc > 25 ){
        printf("O IMC esta abaixo do ideal.\n");
    } else {
        printf("O IMC esta correto\n");
    }
    return 0;
}
