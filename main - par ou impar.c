#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,res;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    res = n % 2;

    if (res == 0) {
        printf("Par");
    }else {
        printf("Impar");
    }
    return 0;
}
