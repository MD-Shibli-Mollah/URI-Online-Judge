#include <stdio.h>

int main()
{
   char a[20], b[21],c[34];
   char vertebrado,ave,carnivoro, ovoro,mamifero,onivoro,insecto,herbivoro,hematofago,invertebrado,anelideo;

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

   if( a == vertebrado && b == ave && c == carnivoro)
   {
       printf("aguina\n");
   }
   else if( a== vertebrado && b == ave && c == ovoro)
   {
       printf("pomba\n");
   }
   else if( a== vertebrado && b == mamifero && c == onivoro)
   {
       printf("homem\n");
   }
   else if( a== vertebrado && b == mamifero && c == herbivoro)
   {
       printf("vaca\n");
   }
   else if( a == invertebrado && b == insecto && c == hematofago )
   {
       printf("pulga\n");
   }
   else if(a == invertebrado && b == insecto && c == herbivoro )
   {
       printf("lagarta\n");
   }
   else if(a == invertebrado && b == anelideo && c == hematofago )
    {
        printf("sanguessuga\n");
    }
    else if(a == invertebrado && b == anelideo && c == onivoro)
    {
        printf("minhoca\n");
    }

   return 0;
}

