#include <stdio.h>

int main()
{
    int i,j,a,k=0;
    scanf("%d", &a);
    for(i=1; i<=a;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d ",(j+k));
        }
        k+=4;
        printf("PUM\n");
    }
    return 0;
}
