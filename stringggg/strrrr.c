#include <stdio.h>

int main()
{
    char a[25] = " BANGLADESH CRICKET TEAM";
    char b[9] = "I love";
    strcat(b , a);
    printf("%s\n", b);
    return 0;
}
