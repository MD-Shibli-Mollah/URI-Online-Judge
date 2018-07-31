#include <stdio.h>

int main()
{
    int a,b;
    double distance,c;

    scanf("%d %d", &a , &b);

    distance = a*b;
    c= distance/12;

    printf("%.3lf\n",c);

    return 0;
}
