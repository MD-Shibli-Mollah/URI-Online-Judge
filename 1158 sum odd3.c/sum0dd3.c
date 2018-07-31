#include <stdio.h>

int main()
{
    int i,j,a,b,x,sum =0;
    scanf("%d", &x);
    for(i =0 ; i<x;i++)
    {
        scanf("%d %d", &a, &b);
        if( a>b )
        {
            for(j =0 ; j<=b ;j++)
            {
                if( a%2 != 0 )
                {
                    sum = sum+a;
                }
                /*else
                {
                    a = a+j;
                    sum = sum +a;
                }*/
            }
            printf("%d\n", sum);
            sum =0;
        }
    }
}
