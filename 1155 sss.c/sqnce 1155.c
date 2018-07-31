#include <stdio.h>

int main()
{
    double i;
    double a =0;

    for( i =1; i<=100;i++)
    {
        a = a+(1/i);
    }

    printf("%.2lf\n",a);

    return 0;
}
