#include <stdio.h>

int main()
{
    int R,sqr;
    double VOLUME;
    scanf("%d",&R);
    sqr = R*R;
    VOLUME = (4.0/3)*3.14159*sqr*R;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
