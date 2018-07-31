#include <stdio.h>

int main()
{
    int i, cou =0;
    double k,sum,avg;
    for( i=0; i<6 ; i++)
    {
        scanf("%lf", &k);
        if(k>0)
        {
            cou = cou +1;
            sum = k + sum;

        }
    }
        printf("%d valores positivos\n", cou);
        avg = sum/cou;
        printf("%.1lf\n", avg);
        return 0;
}
