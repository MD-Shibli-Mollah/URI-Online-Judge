#include <stdio.h>

int main()
{
    int i,j=0;
    double a ,sum=0,av;
    for(i = 0; i>=0; i++)
    {
        scanf("%lf", &a);
        if((a>=0.0) && (a<=10.0))
        {
            j++;
            sum = sum+a;
            if(j==2)
            {
                break;
            }
        }
        else if(a<0.0 || a>10.0)
        {
            printf("nota invalida\n");
        }
    }
        av = sum/j;
        printf("media = %.2lf\n",av);
    return 0;
}
