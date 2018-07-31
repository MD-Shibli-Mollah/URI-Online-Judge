#include <stdio.h>

int main()
{
    int i;
    double sum=1.00,j=2.00;
    for(i=3; i<=39;i+=2)
    {
        sum = sum + (double)(i/j);
        j*=2;
    }
        printf("%.2lf\n",sum);

    return 0;
}
