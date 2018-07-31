#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d", &a);

    for( i = 0; i<6 ; i++)
    {

        if(a%2 == 1)
          {
            a = a+2;
            printf("%d\n",a);
          }
        else
        {
            a = a+1;
            printf("%d\n",a);

        }
    }


    return 0;
}
