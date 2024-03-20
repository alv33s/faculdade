#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Pessoa {
    char nome[1024];
    int idade;
    float altura;
    float peso;
};

float calculaIMC(struct Pessoa X);

int main(){
    system("cls");

    struct Pessoa X = criaPessoa();
    printf("Nome: %s\n idade: %d\n altura: %.2f\n peso: %f\n", X.nome, X.idade, X.altura, X.peso);
    float IMC = calculaIMC(X);
    printf("IMC = %.2f", IMC);


    
    
    
}

float calculaIMC(struct Pessoa X){
    float IMC = X.peso / (X.altura * X.altura);
    return (IMC);
}

struct Pessoa criaPessoa(){
    printf("Digite seu nome: ");
    gets(X.nome);
    printf("Digite sua idade: ");
    scanf("%d", &X.idade);
    printf("Digite sua altura: ");
    scanf("%f", &X.altura);
    printf("Digite seu peso: ");
    scanf("%f", &X.peso);
}

