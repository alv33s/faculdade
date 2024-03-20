#include <stdio.h>

int main(){
    double notas[4];
    double pesos[4] = {0.1, 0.2, 0.3, 0.4};
    double notafinal = 0;
    char nomedoaluno[30];

    printf("Insira o nome do aluno:\n");
    scanf("%s", &nomedoaluno);
    printf("%s", nomedoaluno);

    printf("insira 4 notas:\n");

    for(int i = 0;i <=3;i++){
        scanf("%lf", &notas[i]);
    }

    for(int i = 0;i <=3;i++){
        printf("Nota da lista %d: %lf\n", i + 1, notas[i]);
    }

    printf("Calculando nota final...:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota da lsita %d x peso %d : %lf\n",i,i,pesos[i] *notas[i] );
        notafinal = notafinal + (pesos[i] * notas[i]);
    }
    
    printf("Nota final %.2lf\n", notafinal);

    return 0;
}