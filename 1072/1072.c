#include <stdio.h>

int main()
{
    int i,j,a,b,in =0,out=0;

    scanf("%d", &a);

    for( i =1; i<=a ; i++)
    {
        scanf("%d", &b);

       if( (b>= 10) && ( b<= 20) )
       {
           in = in+1;
       }
       else
       {
         out = out +1;
       }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
return 0;
}






