#include <stdio.h>

int main()
{
    int i,j,b,c,sum = 0;
    for( i = 0; i>=0 ; i++)
    {
        scanf("%d %d", &b, &c);
        if(b ==0 || c ==0)
            {
               return 0;
            }

       else if(b>c)
        {
            for( j = c; j<=b; j++)
            {
                sum = sum+j;
                printf("%d ",j);
            }
        }
        else if(b<c)
        {
            for( j = b; j<=c; j++)
            {
                sum = sum+j;
                printf("%d ",j);
            }
        }
            printf("Sum=%d\n",sum);
            sum = 0;
    }
    return 0;
}
