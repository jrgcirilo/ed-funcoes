#include<stdio.h>

void vogal(char n){
	if((n=='a') || (n=='e') || (n=='i') || (n=='o') || (n=='u')){
        printf("\n E vogal");
    }
	else{
        printf("\n E consoante");
    }
}

int main(){
    char letra;
    printf("\n Digite: ");
    scanf("%c",&letra);
    vogal(letra);
    return 0;
	}
