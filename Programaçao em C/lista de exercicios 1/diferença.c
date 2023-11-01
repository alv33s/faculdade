#include <stdio.h>

int main(){
    int a, b, c, d, diferenca;
    printf("escreva 4 numeros:\n");
    scanf("%d", & a);
    scanf("%d", & b);
    scanf("%d", & c);
    scanf("%d", & d);
    diferenca = (a * b)- (c * d);
    printf("DIFERENCA = %d", diferenca);
    return 0;
}