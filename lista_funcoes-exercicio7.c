#include <stdio.h>

int fatorial(int num) {
    if (num >= 0) {
        int fat = 1;
        while (num > 0) {
            fat *= num;
            num--;
        }
        return fat;
    } else {
        return -1;
    }
}

int main() {
	int fat;
	scanf("%d",&fat);
	printf("O fatorial de %d e %d\n",fat,fatorial(fat));
	return 0;
}
