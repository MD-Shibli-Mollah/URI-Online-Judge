#include <stdio.h>

int main()
{
    double a,sl,sl2,sl3,sl4;
    scanf("%lf", &a);
    if((a >= 0.0) &&(a<= 400.00))
    {
       sl = ((a*15)/100);
       sl2 =  sl + a;
       printf("Novo salario: %.2lf\n",sl2);
       printf("Reajuste ganho: %.2lf\n",sl);
       printf("Em percentual: 15 %%\n");
    }
    else if(( a>= 400.01) &&( a <=800.00 ))
    {
        sl = ((a*12)/100);
        sl2 =  sl + a;
        printf("Novo salario: %.2lf\n",sl2);
        printf("Reajuste ganho: %.2lf\n",sl);
        printf("Em percentual: 12 %%\n");
    }
    else if( (a>= 800.01 ) && (a<=1200.00) )
    {
        sl = ((a*10)/100);
        sl2 =  sl + a;
        printf("Novo salario: %.2lf\n",sl2);
        printf("Reajuste ganho: %.2lf\n",sl);
        printf("Em percentual: 10 %%\n");
    }
    else if(( a>= 1200.01) && (a<= 2000.00))
    {
        sl = ((a*7)/100);
        sl2 =  sl + a;
        printf("Novo salario: %.2lf\n",sl2);
        printf("Reajuste ganho: %.2lf\n",sl);
        printf("Em percentual: 7 %%\n");
    }
    else if( a>= 2.000 )
    {
        sl = ((a*4)/100);
       sl2 =  sl + a;
       printf("Novo salario: %.2lf\n",sl2);
       printf("Reajuste ganho: %.2lf\n",sl);
       printf("Em percentual: 4 %%\n");
    }
    return 0;
}
