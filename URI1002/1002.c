#include <stdio.h>

int main()
{
    double A,R,sqr;
    scanf("%lf", &R);
    sqr = R*R;
    A = 3.14159* sqr;
    printf("A=%.4lf\n",A);
    return 0;
}
