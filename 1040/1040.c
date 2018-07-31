#include <stdio.h>

int main()
{
    double a,b,c,d,av,av2,av3;

    scanf("%lf %lf %lf %lf", &a , &b, &c, &d);

    av = ((a*2)+ (b*3) + (c*4) +(d*1))/10;

    printf( "Media: %.1lf\n", av);

        if( av >= 7.00)
        {
            printf("Aluno aprovado.\n");
        }
        else if(av < 5.00)
        {
            printf("Aluno reprovado.\n",av);
        }
        else if(av >= 5.00 || av<= 6.9)
        {
            printf("Aluno em exame.\n",av);

            double ex;

            scanf("%lf", &ex);

            printf("Nota do exame: %.1lf\n",ex);

            av2 = (ex +av)/2;

                if(av2 >= 5.0)
                    {
                    printf("Aluno aprovado.\n",av2);
                    }
                else if(av2 <= 4.9)
                    {
                    printf("Aluno reprovado.\n",av2);
                    }

                    av3 = (av + ex)/2;

                    printf("Media final: %.1lf\n",av3);
            }

    return 0;
}
