#include <stdio.h>

int main(){
    FILE* arquivo ;
    FILE* html;

    float Total = 0.0;
    struct Produto X;
    arquivo = fopen("CarrinhoDeCompras.txt", "r");
    html = fopen("index.html", "w");

    if (arquivo == NULL || html == NULL)
    {
        printf("Erro");
        return 1;
    }
    

    
}