#include <stdio.h>

int main()
{
    int i,a,al=0,ga=0,de=0;

    for(i =1;i>=1;i++)
    {
        scanf("%d", &a);
        if(a==1)
        {
           al = al+1;
        }
        else if(a==2)
        {
           ga = ga+1;
        }
        else if(a ==3)
        {
            de = de+1;
        }
        else if(a==4)
        {
            break;
        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",de);
    return 0;
}
