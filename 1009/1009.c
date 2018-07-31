#include <stdio.h>

int main()
{
    double a,p,TOTAL;
    char b;
    scanf("%s %lf %lf", &b, &a , &p);
    TOTAL = a + ((p*15)/100);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
