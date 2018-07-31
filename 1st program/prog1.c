#include<stdio.h>

int main()
{
    int i,uni,clas,N,n,m,x,y,K;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d %d %d",&n,&m,&x,&y);
        uni=(m-n)*60;
        clas= x*y;
        K=uni-clas;
        printf("Case %d: %d\n",i,K);
    }
    return 0;
}

