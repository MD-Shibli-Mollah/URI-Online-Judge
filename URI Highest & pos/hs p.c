#include <stdio.h>

int main()
{
    int i, max = 0;
    int a[101];


    for( i = 0 ; i<100 ; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > a[max])
        {
            max = i;

        }
    }
    printf("%d\n%d\n",max+1, a[max]);

    return 0;
}

