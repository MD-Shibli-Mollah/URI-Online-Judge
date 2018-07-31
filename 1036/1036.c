#include <stdio.h>
#include <math.h>

int main()
{
    double e,x1,x2,sq,a,b,c,d,f,g;
    scanf("%lf %lf %lf", &a , &b , &c);
    sq = b*b;
    d = 4*a*c;
    e = sq - d;
    f = (-b + sqrt(e));
    g = (-b - sqrt(e));
    x1 = f/(2*a);
    x2 = g/(2*a);

    if (a == 0.0 || e <= 0.0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    return 0;
}
