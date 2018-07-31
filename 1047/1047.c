#include <stdio.h>

int main()
{
    int a,b,c,d,s1,s2,t1,t2,t3;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s1 = ((a*60) + b) ;
    s2 = ((c*60) + d) ;

    if( (s1 <= 1440) && (s1>=s2))
       {
          t1 = (1440 - s1) + s2;
          t2 = t1/60;
          t3 = (t1 - (t2*60));
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t2 , t3);
       }
       else if((s2 <= 1440) && (s1 < s2))
        {
            t1 = s2 - s1;
            t2 = t1/60;
            t3 = (t1 - (t2*60));
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t2,t3);
        }

    return 0;
}
