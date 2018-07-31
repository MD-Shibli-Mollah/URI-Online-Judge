#include <stdio.h>

int main()
{
    int i,j,k;
    scanf("%d", &j);

    for( i= 1; i<=j; i++)
    {
        if( i%2 == 0)
        {
            k = i*i;
            printf("%d^2 = %d\n",i,k);
        }

    }
    return 0;
}

