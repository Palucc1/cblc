#include<stdio.h>

long double imprimirQuadradoDeFracionado(){
    double numero = 0.123123123123;

    printf("o quadrado de %.12lf  é: %.12lf\n", numero, numero * numero);
}

unsigned long obterQuadrado(long base){
    return base * base;
}

int main(void){
    imprimirQuadradoDeFracionado();

    long num = -100000;

    printf("O quadrado de %ld é %lu\n", num, obterQuadrado(num));

    return 0;
}