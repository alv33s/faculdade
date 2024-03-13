#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fib(int x);

int main(){
    system("cls");
    int N, Resultado;
    scanf("%d", &N);
    Resultado = Fib(N);
    if(Resultado != ERRO) printf("Resposta = %d",Resultado);
    else printf("Não existe fatorial de numero negativo");
}

int Fib(int x){
    if(x == 1 || x == 2) return 1;
    else if(x > 2) return(Fib(x - 1) + Fib(x - 2));
    else return (ERRO);
}
 