#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d", &j);

    for( i= 1; i<10000; i++)
    {
           if((i % j) == 2)
           {
            printf("%d\n",i);

           }
    }
    return 0;
}


