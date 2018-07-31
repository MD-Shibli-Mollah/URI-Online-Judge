#include <stdio.h>

int main()
{
    int i,a,b,c;
    float div = 0;
    scanf("%d", &a);

    for(i =0; i<a ; i++)
    {

        scanf("%d %d", &b , &c);

        if(b/c != div)
        {
            printf(" indivisive\n");
        }
        else
        {
            div = (float) b/c;
            printf("%.1lf\n", div);
        }
    }

    return 0;
}
