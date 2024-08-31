#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [50];
    char nome2 [50];

    printf ("Digite seu nome:" );
    scanf("%s", nome);

    printf("nome: %s\n", nome);

    fflush(stdin);

    printf("Digite seu nome: ");
    fgets (nome2, sizeof(nome2), stdin);

    printf ("nome: %s\n", nome2);


    return 0;
}
