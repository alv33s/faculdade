#include <stdio.h>
#include <string.h>

void exibirArray_V1(int Array[], int tamanho);
void modificarVetor(int *p, int tamanho);

void main(){

    int V[]= {7, 3, 1, 9, 6};
    int tamanho = sizeof(V) / sizeof(int);//sizeof(V): numero
    exibirArray_V1(V , tamanho);
    modificarVetor(V , tamanho);
    exibirArray_V1(V , tamanho);

}

void exibirArray_V1(int Array[], int tamanho){
    for(int i = 0; i < tamanho; i++) printf("%d ", Array[i]);
    printf("\n");
    


}

void modificarVetor(int *p, int tamanho){
    //obs : P é um endereço de memória

    for(int i = 0; i < tamanho; i++) p[i] = p[i] + 12;
}
