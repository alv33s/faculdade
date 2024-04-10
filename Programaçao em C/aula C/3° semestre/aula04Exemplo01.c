#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 20

int main()
{
    int V[TAMANHO];
    clock_t Inicio, Fim;
    double tempoCPU;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) V[i] = rand();
    Inicio = clock();
    for (int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);
    Fim = clock();

    tempoCPU = ((double) (Fim - Inicio)) / CLOCKS_PER_SEC;
    printf("tempo = %lf\n", tempoCPU); 
       
}