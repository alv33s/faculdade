#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");
    int numero;
    char Palavra [50] ;
    if (arquivo == NULL){
        printf("ERRO");
        return 1;
    }
    
    fscanf(arquivo, "%s %d", Palavra, numero);
    printf("Numero: %d Palavra: %s\n",numero, Palavra);
    fscanf(arquivo, "%s %d", numero, Palavra);
    printf("Numero: %d Palavra: %s",Palavra, numero);
    fclose(arquivo);
    return 0;
}