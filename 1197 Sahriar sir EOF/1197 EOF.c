#include <stdio.h>

int main()
{
    int a,b,s;
    while(scanf("%d %d", &a, &b) !=EOF)
    {
        s = a * (2*b);
        printf("%d\n",s);
    }
    return 0;
}
