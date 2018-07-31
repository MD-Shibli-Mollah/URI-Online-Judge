#include <stdio.h>

int main(void)
{
    double a,b,c,s,q,z;
    scanf("%lf %lf %lf", &a ,&b ,&c);
    s = a*a;
    q = b*b;
    z = c*c;
    if( (a>b) && (a>c) && (b !=c) )
    {
        if( a>=(b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( s == (q + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( s > (q+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( s < (q+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

    }
    else if( (b>a) && (b>c) && (a != c) )
    {
        if( b>=(a+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( q == (s + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( q > (s+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( q < (s+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }

    else if( (c>b) && (c>a) && (b != a) )
    {
       if( c>=(b+a))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( z == (q + s) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( z > (q+s) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( z < (q+s))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }
    else if( (a==b) && (a==c))
    {
         if( a>=(b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( s == (q + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( s > (q+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( s < (q+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b) && ( b != c ) && (c>b) )
    {
         if( c>=(a+b))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( z == (q + s) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( z > (q+s) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( z < (q+s))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    else if((a==c) && ( b != c ) && (c > b) )
    {
         if( c>=(b+a))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( z == (s + q) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( z > (s+q) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( z < (q+s))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    else if((a==b) && ( b != c ) && (c<b) )
    {
         if( b>=(c+a))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( q == (z + s) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( q > (z+s) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( q < (z+s))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    else if((a==c) && ( b != c ) && (b>c) )
    {
         if( b>=(a+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( q == (s + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( q > (s+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( q < (s+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    else if((b==c) && ( a != c ) && (a>c) )
    {
         if( a>=(b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( s == (q + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( s > (q+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( s < (q+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    else if((b==c) && ( a != c ) && (c>a) )
    {
         if( b>=(a+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if( q == (s + z) )
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if( q > (s+z) )
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if( q < (s+z))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
