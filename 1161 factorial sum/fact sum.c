#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=0,j=0,fact =1,fact1=1,sum;

   while(scanf("%d %d", &a, &b) !=EOF);
     {
       while(i<a)
        {
            fact =(a - i)*fact;
            i++;
        }
         while(j<b)
        {
            fact1 =(b - j)*fact1;
            j++;
        }
        sum =fact+fact1;

        printf("%d\n",sum);
     }

        return 0;
}

