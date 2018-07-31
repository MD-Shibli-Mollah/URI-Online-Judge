#include <stdio.h>

int main()
{
    int i,b = 2002,c;
    for(i = 0; i< 1 ;i--)
    {
        scanf("%d", &c);

        if( c != b)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            return 0;
        }
    }
    return 0;

}
