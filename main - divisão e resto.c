#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, res;
    printf("Digite um numero: \n");
    scanf ("%d", &a);
    printf("Digite outro numero: \n");
    scanf("%d", &b);
    res = a % b;
    printf("resto da divisão: %d\n", res);

    if (res = 0){
        printf("Perfeitamente divisivel\n");
    }else {
        printf("Nao e perfeitamente divisivel\n");
    }


    return 0;
}
