#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Digite um numero: \n");
    scanf("%f", &n);

    if (n<0){
        printf ("Solido");
    }else if (n>100) {
        printf("Gasoso");
    }else {
        printf("Liquido");
    }
    return 0;
}
