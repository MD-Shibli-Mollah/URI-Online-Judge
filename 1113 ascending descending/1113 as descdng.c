#include <stdio.h>

int main()
{
    int i,b,c;
    for(i =0; i<1;i--)
    {
        scanf("%d %d", &b, &c);
        if(b >c)
        {
            printf("Decrescente\n");
        }
        else if(b<c)
        {
            printf("Crescente\n");
        }
        else if(b == c)
        {
            return 0;
        }

    }
    return 0;
}
