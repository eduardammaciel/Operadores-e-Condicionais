#include <stdio.h>
#include <stdlib.h>

int main()
{
    double delta, a, b, c, r1, r2;
    //a=3;
    //b=2;
    //c=-8;
    printf("Bhaskara\n");
    printf ("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = (b*b)- (4*a*c);
    r1 = (-b + (sqrt(delta)))/(2*a);
    r2 = (-b - (sqrt(delta)))/ (2*a);



    printf ("r1 = %.3lf\n", r1);
    printf ("r2 = %.3lf\n", r2);

    return 0;
}
