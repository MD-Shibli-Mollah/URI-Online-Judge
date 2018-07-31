#include <stdio.h>

int main()
{
    int i,a,j,sum =0;
    for( i=1 ;i>=1; i++)
        {
            scanf("%d", &a);
        if(a == 0)
        {
            break;
        }
        else
        {
            for(j =a; j<a+9;j++)
            {
                if(j%2 == 0 )
                {
                    sum = sum +j;
                }
                else
                {
                    j = j+1;
                    if(j%2 ==0)
                    {
                        sum = sum +j;
                    }
                }
            }
            printf("%d\n", sum);
            sum =0;


        }

        }
    return 0;
}
