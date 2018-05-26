// Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>

float media(int soma, float cont)
{
    float r;
    r=soma/cont;
    return r;
}

int soma_vet(int vet[20], int nt) 
{
   if(nt!=0) 
   {
        int sm;
        sm = soma_vet (vet, nt-1);
        if (vet[nt-1] > 0) 
        {
        	sm=sm+vet[nt-1];
		}
        return(sm);
	}
	else
	return 0;
} 

int main()
{
	int i, num[20], soma, nt;
	float cont;
	for(i=0; i<20; i++)
	{
		num[i]=0;
	}
	printf("\nDigite o numero de termos (de 5 a 20): ");
	scanf("%d", &nt);
	printf("\nAgora digite os numeros: ");
	for(i=0; i<nt; i++)
	{
		scanf("%d", &num[i]);
		getchar();
		if(num[i] != 0) 
		cont++;
	}
	soma=(soma_vet(num, nt));
	printf("\nMedia = %.3f", media(soma, cont));
	return 0;
}
