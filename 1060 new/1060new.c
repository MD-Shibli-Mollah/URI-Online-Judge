#include <stdio.h>

int main()
{
    int i, cou =0;
    double k;
    for( i=0; i<6 ; i++)
    {
        scanf("%lf", &k);
        if(k>0)
        {
            cou = cou +1;

        }
    }
        printf("%d valores positivos\n", cou);

        return 0;
}
