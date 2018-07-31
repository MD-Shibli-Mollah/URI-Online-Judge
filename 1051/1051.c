#include <stdio.h>

int main()
{
    double a,b,t,d,c;
    scanf("%lf", &a);
    if( (a>= 0.00) && (a<= 2000.00) )
    {
        printf("Isento\n");
    }
    else if ((a>= 2000.01) && (a<= 3000.00))
            {
                b = a - 2000;
               t = (b*8)/100;

                printf("R$ %.2lf\n",t);
            }

    else if( (a >=3000.01) && (a <= 4500.00) )
            {
                b = a - 2000;
                c = ((b - 1000) *.18);
                d = c + 80;
                printf("R$ %.2lf\n",d);
            }
    else if( a >= 4500.00 )
        {
            b = a - 2000;
            c = ( (b - 2500) *.28);
            d = c + 80 + 270;
            printf("R$ %.2lf\n",d);
        }

    return 0;
}
