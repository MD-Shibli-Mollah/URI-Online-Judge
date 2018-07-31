#include <stdio.h>

int main()
{
    long long int a;
    while(scanf("%lld", &a) !=EOF && a>=2000)
    {
        if ((((a%4)==0) && ((a%100) !=0)) || ((a%400)==0))
            {
                    printf("This is leap year.\n");
            }
        else if( (a%15)==0 )
        {
            printf("This is huluculu festival year.\n");
        }
        else if( (((((a%4)==0)  && ((a%100) !=0))) && ((a%400)==0)) && ((a%55)==0))
        {
            printf("This is buluculu festival year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
