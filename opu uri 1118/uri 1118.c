#include <stdio.h>

int main(){
	int i,j=0,x,n;
	double a ,sum=0,av=0;

	while(1)
	{
        scanf("%lf", &a);
            if(a>0 && a<=10){
                j++;
                sum = sum+a;

			if(j==2)
            {
				av = sum/2;
				printf("media = %.2lf\n",av);
				sum =0;
				j=0;
				x=0;
				while(x!=1 && x!=2)
                {
					scanf("%d", &x);

                    printf("novo calculo (1-sim 2-nao)\n");
				}
				if(x == 2)
				{
					break;
				}

			}
		}
		else
            {
                printf("nota invalida\n");
            }

	}

	return 0;
}


