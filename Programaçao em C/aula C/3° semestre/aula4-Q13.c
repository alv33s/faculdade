#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ConcatenarString(char *result , char *A, char *B);

void main(){
    char A[128];
    char B[128];
    char result[256];

    gets(A);
    gets(B);
    ConcatenarString(result, A, B);
    puts(result);
}

void ConcatenarString(char *result , char *A, char *B){
    int Posicao = 0;

    for( ; A[Posicao] != '\0'; Posicao++) result[Posicao] = A[Posicao];

    for(int i = 0; B[i] != '\0' ; i++, Posicao++){
        result[Posicao] = B[i];
        
    }

    result[Posicao] = '\0';
}