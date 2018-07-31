#include <stdio.h>

int main()
{
    int i,a;
    double sum =0;
    for(i =0;i>=0 ;i++)
    {
        scanf("%d", &a);
        if(a<0)
        {
            break;
        }
        else
        {
            sum = sum+a;
        }
    }

        printf("%.2lf\n", sum/i);

    return 0;
}
