#include <stdio.h>

int main()
{
    int i,j;
    for(i =1; i<=9;i+=2)
    {
            for(j =0 ;j<3;j++)
            {
                if(i ==1)
                {
                    printf("%d %d\n", i,7-j);
                }
                else if(i ==3)
                {
                    printf("%d %d\n", i,9-j);
                }
                else if(i ==5)
                {
                    printf("%d %d\n", i,11-j);
                }
                else if(i ==7)
                {
                    printf("%d %d\n", i,13-j);
                }
                else
                {
                    printf("%d %d\n", i,15-j);
                }
            }
    }
    return 0;
}
