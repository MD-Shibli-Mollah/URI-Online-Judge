#include <stdio.h>

int main()
{
    int i,j;

    for( i = 0; i<=9 ; i++)
    {
        if(i%2 != 0)
        {
            for( j=0 ; j<3 ;j++)
            {
                printf("i=%d j=%d\n", i , 7-j);
            }
        }

    }

    return 0;
}

