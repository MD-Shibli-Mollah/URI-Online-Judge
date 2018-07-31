#include <stdio.h>

int main()
{
    int i,j,b;
    for(i=0 ; i<1;i-- )
    {
        scanf("%d", &b);

        if(b ==0)
            {
                return 0;
            }
            else
            {
                for(j =1; j<=b;j++)
                {
                    if(j !=b )
                    {
                        printf("%d ",j);
                    }
                    else
                    {
                        printf("%d\n", j);
                    }

                }
            }

    }
    return 0;
}
