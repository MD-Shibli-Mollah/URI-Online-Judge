#include <stdio.h>

int main()
{
    int a,i,fact =1;

    scanf("%d", &a);
    for(i =0; i<a ; i++)
    {
        fact =(a - i)*fact;
    }
        printf("%d\n",fact);

    return 0;
}
