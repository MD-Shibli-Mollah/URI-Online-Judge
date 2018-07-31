#include <stdio.h>

int main()
{
    int a,b,c,i,j,k,l,r,p;
    int sa,m,d,day,hr,mi,sec;
    char cd[5],cd2[5],e[4],f[4],g[4],h[4];
    scanf("%s %d",&cd ,&a);
    scanf("%d %s %d %s %d", &l, &e, &c, &f,&d);

    scanf("%s %d",&cd2 ,&b);
    scanf("%d %s %d %s %d", &i, &g, &j, &h ,&k);

    r = (a*24*60*60) + (l*60*60) + (c*60) + d;
    sa = (b*24*60*60) + (i*60*60) + (j*60) + k;
    p = sa - r;
    day = p/86400;
    hr = (p - (day*86400))/3600;
    mi = (p - (day*86400) - (hr*3600) )/60;
    sec = p - (day*86400) - (hr*3600) - (mi*60);
    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hr);
    printf("%d minuto(s)\n",mi);
    printf("%d segundo(s)\n",sec);

    return 0;
}




