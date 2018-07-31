#include <stdio.h>

int main()
{
    int i=1,j,k,a;
    scanf("%d", &a);
    while(i<=a)
    {
        j =i*i;
        k = i*i*i;
        printf("%d %d %d\n",i,j,k);
        i++;
        j++;
        k++;
    }
    return 0;
}
