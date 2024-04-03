#include <stdio.h>

int main(){
    FILE *campeonato;
    campeonato= fopen("arquivo.txt", "r");
    int vitorias, empates, derrotas;
    char time [50] ;
    if (campeonato == NULL){
        printf("ERRO");
        return 1;
    }
    system("cls");
    while(fscanf(campeonato, "%s %d %d %d", time, &vitorias, &empates, &derrotas  ) != EOF){
        int somaDosPontos = 3*vitorias + 1*empates + 0*derrotas; 
        printf("O time %s tem o total de pontos de = %d\n", time, somaDosPontos);
        //fputs = escreve uma string em um arquivo
        //sitaxe = fputs = (variavelString , NomeDoArquivo);
        
    }
    fclose(campeonato);
    return 0;
}