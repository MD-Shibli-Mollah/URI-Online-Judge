#include <stdio.h>

int main()
{
    int i,j=0,x,n;
    double a ,sum=0,av=0;
    for(i = 0; i>=0; i++)
    {
        scanf("%lf", &a);
        if((a>=0.0) && (a<=10.0))
        {
            j++;
            sum = sum+a;

            if(j==2)
            {
                av = sum/2;
                printf("media = %.2lf\n",av);
                sum =0;
                j=0;

                scanf("%d", &x);
                printf("novo calculo (1-sim 2-nao)\n");

                if(x ==2)
                    {
                        break;
                    }

                while( scanf("%d", &x) && (x == 1) )
                {
                    printf("novo calculo (1-sim 2-nao)\n");

                }

            }
        }
        else if (a<0.0 || a>10.0)
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}

