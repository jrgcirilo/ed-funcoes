#include <stdio.h>

void decrescente(int n)
{			 
 	int i, j, aux;
	int vet[n];
	for(i=0 ; i<n; i++){

        printf("Elemento %d do vetor 1: ",i);
        scanf("%d", &vet[i]);
    }
    for(j = 1; j < n; j++){

		    while((vet[j] > vet[j - 1]) && (j!=0)) {

				    aux = vet[j];
				    vet[j] = vet[j - 1];
				    vet[j - 1] = aux;
				    j--;   
		    }			  
    }
 for (j = 0; j < n; j++)
 {
  printf(" %d" , vet[j]);
 }
}

int main()
{
int qtde;
printf("Digite a quantidade de elementos: ");
scanf("%d",&qtde);
decrescente(qtde);
}
