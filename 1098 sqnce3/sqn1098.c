#include <stdio.h>

int main()
{
    double i,j,k=0;
    for(i =0;i<=2;i+=.2)
    {
        for(j =1;j<=3;j++)
        {
             /*if(floor(i) < i)
             {
                 printf("%d\n",i);
             }
            else
            {
                printf("%d\n",floor(i));
            }*/
            printf("%.1lf %.1lf\n",i,(j+k));
        }
        k+=.2;
    }
    return 0;
}
