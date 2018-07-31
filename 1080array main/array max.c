#include <stdio.h>

int main()
{
    int i, max = 0,pos;
    int a[101];


    for( i = 0 ; i<100; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > max)
        {
            max = a[i];
            pos = i+1;


        }
    }
    printf("%d\n%d\n",max,pos);

    return 0;
}

