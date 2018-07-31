#include <stdio.h>

int main()
{
    int i,k,a,b=0,c=0,d=0,total=0;
    char x, y = 'C' , z ='R' , q = 'S';
    double co,ro,so;
    scanf("%d", &k);
    for( i = 0; i<k ; i++)
    {
        scanf("%d %c", &a , &x);
        if(x == y)
        {
            b = b+a;
        }
        else if(x ==z)
        {
            c = c+a;
        }
        else if( x == q)
        {
            d = d+a;
        }
    }
    total = b+c+d;
    co = (double) (b*100)/total;
    ro = (double) (c*100)/total;
    so = (double) (d*100)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",b);
    printf("Total de ratos: %d\n",c);
    printf("Total de sapos: %d\n", d);
    printf("Percentual de coelhos: %.2lf %\n", co );
    printf("Percentual de ratos: %.2lf %\n", ro );
    printf("Percentual de sapos: %.2lf %\n", so );
    return 0;
}

