#include <stdio.h>

int main()
{
    double A,B,C,sqr1,SQR2,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf", &A, &B , &C);
    TRIANGULO = .5 *A*C;
    sqr1 = C*C;
    CIRCULO = 3.14159*sqr1;
    TRAPEZIO = .5*C*(A+B);
    SQR2 = B*B;
    QUADRADO = SQR2;
    RETANGULO = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
    return 0;
}
