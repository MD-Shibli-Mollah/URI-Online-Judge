#include <stdio.h>

int main()
{
    double a,b,c,t,d;
    scanf("%lf %lf %lf", &a , &b , &c);
    if(((a+b)>c) && ((a+c)>b) &&((b+c) >a ))
    {
        d = a+ b+ c;
        printf("Perimetro = %.1lf\n",d);
    }


    else
    {
        t = .5 *(a+b)*c;
        printf("Area = %.1lf\n",t);
    }
    return 0;
}
