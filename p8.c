//Camila Fernanda Machado Alves 11721EBI016

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
	int i;  
	for(i = 0; i < tam; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float somatorio(float vet[], int n)
{
   if (n==0) 
	 return 0;
   else 
   {
      float r;
      r = somatorio (vet, n-1);
      if (vet[n-1] > 0) 
      r += vet[n-1];
      return (r);
   }
}

float produto(float vet[], int n)
{
	int i;
	float mult = 1.0f;
	for(i=0; i<n; i++)
		mult = mult*vet[i];
	return mult;
}

int main()
{
	srand(123456);
	int op, n=100;
	float num[100];
	gera_numeros(num, n);
	do{
	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	printf("\nDigite a opcao: ");
	scanf("%d", &op);	
	getchar();
	switch(op)
	{
		case 1:
			printf("\nSomatorio: %f", somatorio(num,n));
			break;
		case 2:
			printf("\nProduto: %f", produto(num,n));
			break;
		case 3:
			return 0;
		default:
			break;
	}
	}while(op!=4);
	return 0;
}
