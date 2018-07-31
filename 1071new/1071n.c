#include <stdio.h>

int main()
{
    int i,a,b,c=0;
    scanf("%d %d", &a , &b);

    if(a>b)
    {
        for(i= b+1; i<a ;i++ )
            if(i%2 !=0)
            c=c+i;
    }
     if(a<b)
    {
        for(i= a+1; i<b ; i++)

        {
            if((i%2) != 0)
            {
                c = c+i;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}
