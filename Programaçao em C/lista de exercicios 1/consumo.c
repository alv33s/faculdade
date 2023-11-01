#include <stdio.h>

int main(){
    int x;
    float y , consumo;
    printf("primeiro fale quantos km o automovel percorreu e depois a quantidade de litos que foi gasto:");
    scanf("%d", & x);
    scanf("%f", & y);
    consumo = x/y;
    printf("%0.3f", consumo );
    printf(" km/l");
    return 0;
}