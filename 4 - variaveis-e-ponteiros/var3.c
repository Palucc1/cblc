#include<stdio.h>

int c = 1;

int soma10(int num){
    int b = 10;

    return b + num;
}

int main (void){
    int a = 25;

    // nesse caso o compilador acusou erro pois 'b' e 'num' não foram declaradas (estão fora do escopo de 'main')
    printf("a = %d\nb = %d\nc = %d\nnum = %d\n", a, b, c, num);

    return 0;
}
