#include <stdio.h>

int main()
{
    int i,j,a,b,c,d =0;
    scanf("%d", &a);
    for( i = 0; i<a ; i++)
    {
        scanf("%d %d", &b, &c);
        if(b>c)
        {
            for(j = c+1; j<b ; j++)
            {
                if((j%2) != 0)
                {
                    d = d+j;
                }
            }
        }
        else if(c>b)
        {
            for(j = b+1; j<c ; j++)
            {
                if(j%2 != 0)
                {
                     d = d+j;
                }

            }
        }
            printf("%d\n",d);
            d = 0;
    }

    return 0;
}
