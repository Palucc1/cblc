#include <stdio.h>

int main(void){
    int a = 25;
    int b = 17;
    int *p = &b;

    printf("Endereço (b)    : %p\n", p);  // Especificador de formato %p pois se trata de um ponteiro e preciso exibir em hexadecimal
    printf("Valor (b)       : %d\n", *p); // Utilizar a indireção "*" trará o oposto do endereço. Nesse caso, o valor
    printf("Endereço (a)    : %p\n", &a); // Endereço de "a"
    printf("Endereço (p+1)  : %p\n", p - 1); // Também exibirá o endereço de "a" pois p - 1 pegará o endereço de memória anterior da pilha
    printf("Valor (p+1)     : %d\n", *(p - 1)); //Exibirá o valor de "a"

    return 0;
}