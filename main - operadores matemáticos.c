#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, soma, sub, mul, div;
    printf("Digite um numero: \n");
    scanf ("%f", &n1);
    printf("Digite outro numero: \n");
    scanf("%f", &n2);

    soma = (n1 + n2);
    printf("soma: %.3f\n", soma);

    sub = (n1-n2);
    printf("subtra��o: %.3f\n", sub);

    mul = (n1*n2);
    printf("multiplica��o: %.3f\n", mul);

    div = (n1/n2);
    printf ("divis�o: %.3f\n", div);
    printf ("divis�o inteiro: %.3f\n", ceil(div));


    //ceil(x) arredonadar o valor



    return 0;
}
