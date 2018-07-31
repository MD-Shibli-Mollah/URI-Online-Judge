#include <stdio.h>

int main()
{
    int i, cou =0,ev =0,od =0,neg =0;
    int k;
    for( i=0; i<5 ; i++)
    {
        scanf("%d", &k);

        if(k>=0)
        {
            if(k>0)
            {
                cou = cou +1;

            if((k%2) == 0)
                {
                    ev = ev +1;
                }
            else if((k%2) == 1)
                    {
                        od = od +1;
                    }
            }
            else
            {
                ev = ev+1;
            }
        }
        else if(k<=0)
        {
            if(k<0)
            {
                neg = neg +1;

                if((k%2) == 0)
                {
                    ev = ev +1;
                }
                else if((k%2) == -1)
                {
                    od = od +1;
                }
            }
            else
            {
              ev = ev+1;
            }
        }


    }

        printf("%d valor(es) par(es)\n", ev);
        printf("%d valor(es) impar(es)\n", od);
        printf("%d valor(es) positivo(s)\n", cou);
        printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
