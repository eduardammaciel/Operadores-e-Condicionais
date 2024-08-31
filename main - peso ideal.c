#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso_ideal, h, sexo, feminino, masculino;
    printf("Informe a sua altura: \n");
    scanf("%f", &h);
    printf ("Informe o seu sexo: \n");
    scanf ("%f", &sexo);

    //feminino = (62.1*h) - 44.7 (h = altura);

    //masculino = (72.7*h) - 58 (h = altura);

    if (sexo == feminino){
        peso_ideal = (62.1*h) - 44.7;
        printf("Peso ideial = %f\n",peso_ideal);
    }else if (sexo == masculino){
        peso_ideal = (72.7*h) - 58;
        printf("Peso ideal = %f\n",peso_ideal);
    }

    float peso;
    printf("Indique o seu peso: \n");
    scanf("%f", &peso);


     if (peso = peso_ideal){
        printf("Esta dentro do peso ideal\n", peso);
     }else {
         printf("não esta dentro do peso ideal\n", peso);

     }

    return 0;
}
