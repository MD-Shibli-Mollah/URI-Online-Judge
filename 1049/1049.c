#include <stdio.h>
#include <string.h>
int main()
{
   char a[20], b[21],c[34];
   char d[15] ={"vertebrado"}, e[15] = {"ave"}, f[15]={"carnivoro"}, g[10] ={"onivoro"},h[10]={"mamifero"};
   char j[10]={"inseto"},k[12]={ "herbivoro"},l[15]={"hematofago"},m[15]={ "invertebrado"},n[15]={"anelideo"};

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

   if( (strcmp(a,d))==0  && strcmp(b,e) == 0 && strcmp(c,f) == 0)
   {
       printf("aguia\n");
   }
   else if(strcmp(a,d)==0 && strcmp(b,e) == 0 && strcmp(c,g) == 0)
   {
       printf("pomba\n");
   }
   else if( strcmp(a,d)== 0 && strcmp(b,h) == 0 && strcmp(c,g) == 0)
   {
       printf("homem\n");
   }
   else if( strcmp(a,d)== 0 && strcmp(b,h) == 0 && strcmp(c,k) == 0)
   {
       printf("vaca\n");
   }
   else if( strcmp(a,m) == 0 && strcmp(b,j) == 0 && strcmp(c,l) == 0 )
   {
       printf("pulga\n");
   }
   else if(strcmp(a,m) == 0 && strcmp(b,j) == 0 && strcmp(c,k) == 0 )
   {
       printf("lagarta\n");
   }
   else if(strcmp(a,m) == 0 && strcmp(b,n) == 0 && strcmp(c,l) == 0 )
    {
        printf("sanguessuga\n");
    }
    else if(strcmp(a,m) == 0 && strcmp(b,n) == 0 && strcmp(c,g) == 0 )
    {
        printf("minhoca\n");
    }

   return 0;
}

