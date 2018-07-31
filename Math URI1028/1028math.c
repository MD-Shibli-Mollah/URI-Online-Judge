#include <stdio.h>

int main()
{
    int i,j,a,b,c,d,e;
    scanf("%d", &a);
    for(i=0; i<a ;i++)
    {
        scanf("%d %d", &b, &c );
        d = c/3;
        e = b/3;
        if(b%c ==0 && c/c==1 )
        {
            printf("%d\n",c);
        }
        else if((b%d) ==0)
        {
            printf("%d\n",d);
        }
        else if((c % e) ==0 && e>3)
        {
            printf("%d\n",e);
        }
        else if(b ==b && c==c )
        {
            for(j=3;j<=9;j++)
            {
                if((b%j)==0 && (c%j) ==0)
                {
                    printf("%d\n",j);
                }
            } j =0;
        }
        /*else
        {
            printf("%d",1);
        }*/
    }
    d = 0;
    e =0;
    return 0;
}
