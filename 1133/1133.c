#include <stdio.h>

int main()
{
    int i,a,b;
    scanf("%d %d", &a , &b);

    if(a>b)
    {
        for(i= b+1; i<a ;i++ )
            if((i%5 == 2) || (i%5 == 3) )
            {
                printf("%d\n", i);
            }
    }
     if(a<b)
    {
        for(i= a+1; i<b ; i++)

        {
            if((i%5 == 2) || (i%5 == 3) )
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
