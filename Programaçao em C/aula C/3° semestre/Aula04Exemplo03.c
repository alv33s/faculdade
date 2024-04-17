#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 20

void Selecao(int *Vetor, int N);

int main(){
    
    void Selecao(int *Vetor, int N){
        for(int i = 0; i < N - 1; i++){
            int minIndex = i;
            for (int j = i + 1; j < N ; j++) {
                if(Vetor[j] < Vetor[minIndex]) minIndex = j;
            }
            //trocar o menor elemento com o da posição i

            int Temp = Vetor[minIndex];
            Vetor[minIndex] = Vetor[i];
            Vetor[i] = Temp;
        }
    }
}