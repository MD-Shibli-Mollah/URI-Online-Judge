#include <stdio.h>

int main()
{
    int i,a;
    scanf("%d", &a);
    for(i = 1;i<=a;i++)
        {
            if(i==a )
            {
                printf("Ho",i);
            }
        else
            {
                printf("Ho ",i);
            }
        }
    printf("!\n");

    return 0;
}
