#include <stdio.h>

int main()
{
    int i,a,b,c,k;
    scanf("%d", &a);

    for(i =0 ; i<a ;i++)
    {
        scanf("%d %d", &b, &c);

        k = (b*c)/2;
        printf("%d cm2\n", k);
    }
    return 0;
}

