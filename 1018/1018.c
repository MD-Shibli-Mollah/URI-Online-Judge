#include <stdio.h>

int main()
{
    int value,hun,fif,tw,ten,f,t,on;

    for(value=0; value<1000000; value++);
       {
        scanf("%d", &value);
        printf("%d\n", value);
        hun = value/100;
        fif = (value - hun*100)/50;
        tw = (value - hun*100 - fif*50)/20;
        ten = (value - hun*100 - fif*50 - tw*20)/10;
        f = (value - hun*100 - fif*50 - tw*20 - ten*10)/5;
        t = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5)/2;
        on = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2)/1;

        printf("%d nota(s) de R$ 100,00\n",hun);
        printf("%d nota(s) de R$ 50,00\n",fif);
        printf("%d nota(s) de R$ 20,00\n",tw);
        printf("%d nota(s) de R$ 10,00\n",ten);
        printf("%d nota(s) de R$ 5,00\n",f);
        printf("%d nota(s) de R$ 2,00\n",t);
        printf("%d nota(s) de R$ 1,00\n",on);
        }
    return 0;
}
