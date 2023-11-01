#include <stdio.h>

int main(){
    int x, notas100, notas50, notas20, notas10, notas5, notas2 ,notas1;
    printf("escreva qualquer numero:");
    scanf("%d", & x);
    if (x % 100 == 0 ){ 
    notas100 = x / 100;
    notas50 = x / 50;
    notas20 = x / 20;
    notas10 = x / 10;
    notas5 = x / 5;
    notas2 = x / 2;
    notas1 = x / 1;
    
    printf("%d", notas100);
    printf(" nota(s) de R$ 100\n");
    printf("%d", notas50);
    printf(" nota(s) de R$ 50\n");
    printf("%d", notas20);
    printf(" nota(s) de R$ 20\n");
    printf("%d", notas10);
    printf(" nota(s) de R$ 10\n");
    printf("%d", notas5);
    printf(" nota(s) de R$ 5\n");
    printf("%d", notas2);
    printf(" nota(s) de R$ 2\n");
    printf("%d", notas1);
    printf(" nota(s) de R$ 1");
    
    
    }
    else{
        printf("valor invalido");
    }
    return 0;


}