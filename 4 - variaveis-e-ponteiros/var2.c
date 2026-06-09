#include <stdio.h>

int main(void){
    int a = 17;
    int b = 25;
    
    puts("Var   Adress        Size  Value");

    // $a = Ao invés de informar o valor de 'a', informe o endereço associado a 'a'
    printf("a -> %p %4zu %5d\n", &a, sizeof(a), a);
    printf("b -> %p %4zu %5d\n", &b, sizeof(b), b);

    return 0;
}