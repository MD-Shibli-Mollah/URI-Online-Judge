#include <stdio.h>
#include <math.h>

int main()
{
    int a,i;
    double r,n, s;

    scanf("%d", &a);

    for(i = 1 ; i <=a ; i++)
    {
        scanf("%lf", &r);
        n = r*r;
        s = (4 *n) - (2* acos(0.0) * n);

        printf("Case %d: %.2lf\n", i, s);
    }
    return 0;
}
