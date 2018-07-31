#include <stdio.h>


int main()
{
    double sqr2,sqr,x1,y1,x2,y2,distance;
    scanf("%lf %lf %lf %lf",&x1 , &y1, &x2, &y2);
    sqr = (x1-x2)*(x1-x2);
    sqr2= (y1-y2)*(y1-y2);
    distance = sqrt(sqr+sqr2);
    printf("%.4lf\n",distance);
    return 0;
}
