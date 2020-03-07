#include <stdio.h>

void subs(char a[], char b[]){
    
    int i;
    
    printf("o char a da funcao eh %s\n",a);
    printf("o char b da funcao eh %s\n",b);
    
   for(i=0;i<12;i++)
    { 
       if(b[i] == a[i]){
           a[i]='*';
       }
      
    }
    
    printf("o char a da funcao depois da troca eh %s\n",a);
    printf("o char b da funcao depois da troca eh %s\n",b);
}

int main() {
	char v[12]; /*reserva espaço para 12 caracteres*/
    char c[12];
	printf("Seu string v: ");
	scanf("%s",v);
	printf("Seu string c: ");
	scanf("%s",c);
	

	printf("o char antes da funcao eh %s\n",v);
	printf("o char antes da funcao eh %s\n",c);
	
	subs(v,c);
}
