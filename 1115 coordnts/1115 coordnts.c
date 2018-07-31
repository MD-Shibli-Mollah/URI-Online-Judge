#include <stdio.h>

int main()
{
    double i,x,y;
    for(i =0; i>=0;i++)
    {
        scanf("%lf %lf", &x , &y);
        if ( x == 0.0 || y == 0.0)
        {
           break;
        }
        else if( x >0.0 && y>0.0)
        {
            printf("primeiro\n");
        }
        else if( x>0.0 && y<0.0)
        {
            printf("quarto\n");
        }
        else if( x<0.0 && y<0.0)
        {
            printf("terceiro\n");
        }
        else if( x<0.0 && y>0.0)
        {
            printf("segundo\n");
        }
    }
    return 0;
}

