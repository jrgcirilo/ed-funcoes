#include <stdio.h>

int decisao(int n){

	int i,a; 
	float vet1[n], vet2[n];
    for(i=0 ; i<n; i++){

        printf("Elemento %d do vetor 1: ",i);
        scanf("%f", &vet1[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){

        printf("Elemento %d do vetor 2: ",i);
        scanf("%f", &vet2[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){

        for(a=5; a>=0; a--)
        {
            if(vet1[i] == vet2[a] || vet1[a] == vet2[i]) 
			printf("Os elementos iguais sao: %f\n", vet1[i]);
        }
    }

return 0;
}

int main(){
	int qtde;
	printf("Digite a quantidade de elementos: ");
	scanf("%d",&qtde);
	decisao(qtde);
	return 0;
}
