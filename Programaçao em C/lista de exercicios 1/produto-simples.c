#include <stdio.h>

int main(){
    int nmr1, nmr2, prod;
    printf("escreva 2 numeros:");
    scanf("%d", & nmr1);
    scanf("%d", & nmr2);
    prod = nmr1 * nmr2;
    printf("o produto entre esse numeros e:%d", prod);
    return 0;
}