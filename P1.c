// Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>

int main ()
{
    int est=0, i, r=0;
    char bits[256];
    printf("Digite uma sequencia numerica de 1 e 0 (numero binario): ");
    scanf("%s", bits);
    for(i=0; bits[i]!='\0'; i++)
    {
         if(est==0&&bits[i]=='0')
         {
             r=0;
         }
         if(est==0&&bits[i]=='1')
         {
             r=1;
         }
         if(est==1&&bits[i]=='1')
         {
             r=0;
         }
         if(est==1&&bits[i]=='0')
         {
             r=2;
         }
         if(est==2&&bits[i]=='0')
         {
             r=1;
         }
         if(est==2&&bits[i]=='1')
         {
             r=2;
         }
        est=r;
        r=0;
     }
     printf("\nA sequencia digitada foi %s", bits);
     if(est==0)
     {
              printf("\nO numero eh multiplo de 3!");
     }
     else
     {printf("\nO numero nao eh divisivel por 3!");}
     return 0;
}
