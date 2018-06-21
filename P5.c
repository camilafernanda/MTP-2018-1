//Aluna: Camila Fernanda Machado Alves Matrícula: 11721EBI016

#include <stdio.h>

int main()
{	char mnsg[256];
	char *pn;
	int i, j, txt[256], opcao;
	int *ps;
	do{
	do{printf("MENU: \n1 - Criptografar \n2 - Descriptografar \n3 - Sair do programa \nSua opcao eh: ");
	scanf("%d", &opcao);
	getchar();}while(opcao!=1 && opcao!=2 && opcao!=3);
	i=0;
	switch(opcao)
	{	case 1:
			for(i=0; i<256; i++){ mnsg[i] = '\0'; }
			printf("Digite uma informacao textual: ");
			fgets(mnsg, 256, stdin);
			for(j=0; mnsg[j] != '\0'; j++);	
			ps = (int*)mnsg;
			printf("\nFrase criptografada: \n");
			for(i=0; i<j; i++)	
			{	if(*(ps+i) != 0 )
				{	
				    printf("%i ", *(ps+i));	
				}	
			} 
			break;
			
		case 2:
			printf("Quando quiser encerrar a sequencia de numeros, entre com 0\n");
			pn=(char*)txt;
			i=0; j=0;
			printf("Digite uma sequencia de numeros: \n");
			do
			{	scanf("%d", &j);
	 			getchar();
				txt[i] = j;
				i++;
			}while(j!= 0);
			pn=(char*)&txt;
			printf("\nFrase descriptografada: \n");
			for(i=0; i<sizeof(txt) && *(pn+i) != 0; i++)
			{	
			    printf("%c", *(pn+i));		
			}
			break;

		default:
			break;
	}
	printf("\n\n");
	}while(opcao != 3);
	return 0;
}
