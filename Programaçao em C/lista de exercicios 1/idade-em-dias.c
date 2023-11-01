#include <stdio.h>

int main (){
    int x, anos, resto, dias, meses; 
    printf("informe sua idade em dias:\n");
    scanf("%d", & x);
    anos = x / 365;
    resto = x % 365;
    meses = resto / 30;
    dias = resto % 30 ;
    printf("%d ", anos);
    printf("anos\n");
    printf("%d ", meses);
    printf("meses\n");
    printf("%d ", dias);
    printf("dias");

    return 0;



}