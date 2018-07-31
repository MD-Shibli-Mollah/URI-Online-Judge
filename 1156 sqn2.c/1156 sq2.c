#include <stdio.h>

int main()
{
    double i,a =0;
    for(i =3; i<=7 ;i+=2)
    {
        a = i/2 +(a*.5);

        printf("%.2lf\n",a);
    }
}
