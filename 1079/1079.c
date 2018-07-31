#include <stdio.h>

int main()
{
    int i,a;
    double b,c,d,mean;
    scanf("%d", &a);

    for( i =0; i<a; i++)
    {
        scanf("%lf %lf %lf", &b,&c,&d);

        mean = ((b*2)+(c*3)+(d*5))/10;
        printf("%.1lf\n", mean);
    }

    return 0;
}



