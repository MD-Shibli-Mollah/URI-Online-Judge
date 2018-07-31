#include <stdio.h>

int main()
{
    int a,b,c,d;
    float e,f,VALORAPAGAR;
    scanf("%d %d %f",&a , &c, &e);
    scanf("%d %d %f", &b , &d, &f);
    VALORAPAGAR = (c*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2f\n",VALORAPAGAR);
    return 0;
}
