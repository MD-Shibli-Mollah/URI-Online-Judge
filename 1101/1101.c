#include <stdio.h>

int main()
{
    int j,i,a,b;
    scanf("%d %d", &a , &b);

    for( j =0; j<a || j<b;j++)
    {

        if(a <=0 || b<=0)
        {
            break;
        }

        else if(a>b)
            {
                for(i = b; i<=a ; i++)
                    {
                        printf("%d\n",i);
                    }
            }
    }
    return 0;
}
