#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcao;
   printf("Digite uma das opcoes: 1, 2 ou 3.\n");
   scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf ("Opcao 1 selecionada.\n");
        break;
    case 2:
        printf("Opcao 2 selecionada.\n");
       break;
    case 3:
        printf("Opcao 3 selecionada.\n");
        break;
    default:
        printf("Opcao invalida.\n");



    }
    return 0;
}
