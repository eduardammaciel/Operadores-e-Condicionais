#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool condicao1 = true;
    bool condicao2 = false;

    //opera��o AND (&&)
    bool resultado_and = condicao1 && condicao2;
    printf("Resultado AND: %d\n", resultado_and);

    //opera��o OR (||)
    bool resultado_or = condicao1 || condicao2;
    printf("Resultado OR: %d\n", resultado_or);

    return 0;
}
