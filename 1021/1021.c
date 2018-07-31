#include <stdio.h>

int main()
{
    int hun,fif,tw,ten,f,t,on,a,b,c,d,e;
    double value;

        scanf("%lf", &value);

        hun = value/100;
        fif = (value - hun*100)/50;
        tw = (value - hun*100 - fif*50)/20;
        ten = (value - hun*100 - fif*50 - tw*20)/10;
        f = (value - hun*100 - fif*50 - tw*20 - ten*10)/5;
        t = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5)/2;
        on= (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2)/1;
        a = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2 - on*1)/0.50;
        b = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2 -on*1 -a*0.50)/0.25;
        c = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2 -on*1 -a*0.50 -b*0.25)/0.10;
        d = (value - hun*100 - fif*50 - tw*20 - ten*10 - f*5 -t*2 -on*1 -a*0.50 -b*0.25 -c*0.10)/0.05;
        e = (value - (hun*100) - (fif*50) - (tw*20) - (ten*10) - (f*5) - (t*2) -(on*1) -(a*0.50) -(b*0.25) -(c*0.10) -(d*0.05))/0.01;

        printf("NOTAS:\n");

        printf("%d nota(s) de R$ 100.00\n",hun);
        printf("%d nota(s) de R$ 50.00\n",fif);
        printf("%d nota(s) de R$ 20.00\n",tw);
        printf("%d nota(s) de R$ 10.00\n",ten);
        printf("%d nota(s) de R$ 5.00\n",f);
        printf("%d nota(s) de R$ 2.00\n",t);

        printf("MOEDAS:\n");

        printf("%d moeda(s) de R$ 1.00\n",on);
        printf("%d moeda(s) de R$ 0.50\n",a);
        printf("%d moeda(s) de R$ 0.25\n",b);
        printf("%d moeda(s) de R$ 0.10\n",c);
        printf("%d moeda(s) de R$ 0.05\n",d);
        printf("%d moeda(s) de R$ 0.01\n",e);

    return 0;
}
