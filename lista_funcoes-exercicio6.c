#include <stdio.h>

void acha_maior(int a){
    if(a==1)
	printf("Janeiro");
	else if(a==2)
	printf("Fevereiro");
	else if(a==3)
	printf("Marco");
	else
	printf("Digite um valor entre 1 e 3");
}

int main(){
    int x;
    scanf("%d",&x);
    acha_maior(x);
    return 0;
}
