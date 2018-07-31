#include <stdio.h>

int main()
{
    int x,y;
    double a,b,c,d,e;
    scanf("%d %d", &x,&y);
    if(x == 1)
    {
        a = x* 4.00 *y;
        printf("Total: R$ %.2lf\n", a);
    }
    else if(x == 2)
    {
        b = (x * 4.50 *y)/2;
        printf("Total: R$ %.2lf\n", b);
    }
    else if(x == 3)
    {
        c = (x* 5.00 *y)/3;
        printf("Total: R$ %.2lf\n", c);
    }
    else if(x == 4)
    {
        d = (x* 2.00 *y)/4;
        printf("Total: R$ %.2lf\n",d);
    }
    else
    {
        e = (x * 1.50 *y)/5;
        printf("Total: R$ %.2lf\n",e);
    }
    return 0;
}
