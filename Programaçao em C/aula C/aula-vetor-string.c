#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Mystrlen(char *str){
    int tamanho = 0;
    for(tamanho = 0; str[tamanho] != '\0'; tamanho++);
    return(tamanho);
    
}

int main(){
    char frase[1024] = "Meu nome é Eneias!!!";
    int tamanho = strlen(frase);
    printf("(%s) tem tamanho %d", frase , tamanho);
    int tamanho = Mystrlen(frase);
    printf("(%s) tem tamanho %d", frase , tamanho);

    return 0;
}