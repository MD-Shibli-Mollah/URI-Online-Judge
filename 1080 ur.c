#include <stdio.h>

int main()
{
    int i;
    int a[i], ma = a[0];


    for( i =1; i<=100 ; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > ma)
        {
            ma = a[i];
        }
        else
        {
            ma = ma+0;
        }
    }
    printf("Highest %d ,pos %d",ma,(i+1));

    return 0;
}
