#include <stdio.h>

int main(){
    double notasdosalunos[2][4];

    for(int i=0;i<=3;i++){
        printf("insira nota %d do primeiro aluno:\n", i+1);
        scanf("%lf", &notasdosalunos[0][i]);
    }
     for(int i=0;i<=3;i++){
     printf("insira nota %d do segundo aluno:\n", i+1);
     scanf("%lf", &notasdosalunos[1][i]);
    }
     for(int i=0;i<=3;i++){
     printf("insira nota %d do terceiro aluno:\n", i+1);
     scanf("%lf", &notasdosalunos[0][i]);
    }
    for(int i=0;i<=3;i++){
        printf("insira nota %d do quarto aluno:\n", i+1);
        scanf("%lf", &notasdosalunos[1][i]);
    }

    printf("Insira nota 1 do primeiro aluno:\n");
    scanf("%lf", notasdosalunos[0][0]);
    printf("Insira nota 1 do primeiro aluno:\n");
    scanf("%lf", notasdosalunos[0][1]);
    printf("Insira nota 1 do primeiro aluno:\n");
    scanf("%lf", notasdosalunos[0][2]);
    printf("Insira nota 1 do primeiro aluno:\n");
    scanf("%lf", notasdosalunos[0][3]);


    return 0;
}