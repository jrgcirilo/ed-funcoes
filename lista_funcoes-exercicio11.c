#include<stdio.h>

void inversor(int num[]){
int i;

printf("A Ordem inversa eh:\n");

for(i=5; i>=1; i--){
printf("Vetor[%d]: %d\n",i,num[i]);
}	
}


int main()
{
int num[5],i;

printf("Insira 5 Valores:\n");

for(i=1; i<=5; i++){
printf("Vetor[%d]: ",i);
scanf("%d",&num[i]);
}

inversor(num);

return 0;
}
