#include <stdio.h>

int main()
{
    int i, cou =0;
    int k;
    for( i=0; i<5 ; i++)
    {
        scanf("%d", &k);
        if( k%2 == 0)
        {
            cou = cou +1;

        }
    }
        printf("%d valores pares\n", cou);

        return 0;
}

