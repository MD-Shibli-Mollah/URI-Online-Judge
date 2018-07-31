#include <stdio.h>

int main()
{
    int t,h,m,s;
    scanf("%d", &t);
    h = t/365;
    m = (t- h*365)/30;
    s = (t- h*365 - m*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);
    return 0;
}

