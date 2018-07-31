#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    if( a>=0.000 && a<=25.000)
       {
            printf("Intervalo [0,25]\n");
       }
    else if(a>25.000 && a<=50.000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(a>75.0000 && a<=100.000)
    {
        printf("Intervalo (75,100]\n");
    }

    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;

}
