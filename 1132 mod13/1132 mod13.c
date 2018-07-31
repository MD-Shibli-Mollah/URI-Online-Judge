#include <stdio.h>

int main()
{
    int i,a,b,sum =0;
    scanf("%d %d", &a, &b);
    if( b>a )
    {
        for( i =a; i<=b;i++ )
        {
            if( a%13 !=0)
            {
                sum = sum+a;
            }
            else if( b%13 != 0)
            {
                sum = sum +b;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
