#include <stdio.h>

int acha_maior(int a,int b){
    if(a!=b)
	return a > b ? a:b;
	else
	return 0;
}

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int r = acha_maior(x,y);
    printf("Maior:%d\n",r);
    return 0;
}
