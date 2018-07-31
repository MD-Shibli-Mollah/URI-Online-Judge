#include <stdio.h>

int main()
{
    int a,b,t1;
    scanf("%d %d",  &a , &b);
    if ((a<=24) && ((a>b)|| (a==b)))
    {
        t1 = (24 -a) +b ;
        printf("O JOGO DUROU %d HORA(S)\n", t1);
    }
    else if( (b<=24) &&( a<b ))
    {
        t1 = b - a;
        printf("O JOGO DUROU %d HORA(S)\n", t1);
    }
    return 0;
}
