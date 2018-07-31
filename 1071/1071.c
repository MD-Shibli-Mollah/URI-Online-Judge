#include <stdio.h>

int main()
{
    int a,b,i,j,c =0,d=0;
    scanf("%d" , &a);
    scanf("%d", &b );

    for( i = 0; i< a ;i++ )
        {
            if((i%2) == 1)
            {
               c = c+i;
            }
        }
         printf("%d\n",c);

    for( j = 0; j< b ; j++ )
        {
            if((j%2) == 1)
            {
               d = d+j;
            }
        }
         printf("%d\n",d);

    return 0;
}

