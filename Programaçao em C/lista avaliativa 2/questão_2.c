#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[31];
    char posicao;
    int forca;
};

struct Time {
    char nome[31];
};

int main() {
    struct Jogador jogadores[22];
    struct Time times[2];

    int goleiro[2] = {0, 0};
    int laterais[4] = {0, 0, 0, 0};
    int zagueiros[4] = {0, 0, 0, 0};
    int volantes[4] = {0, 0, 0, 0};
    int meios[4] = {0, 0, 0, 0};
    int atacantes[4] = {0, 0, 0, 0};

    // Leitura dos dados dos jogadores e cálculo da força por posição
    for (int t = 0; t < 2; t++) {
        gets(times[t]);

        for (int i = 0; i < 11; i++) {
            scanf("%s %c %d", jogadores[i + t * 11].nome, &jogadores[i + t * 11].posicao, &jogadores[i + t * 11].forca);
            char posicao = jogadores[i + t * 11].posicao;
            int forca = jogadores[i + t * 11].forca;

            if (posicao == 'G') {
                goleiro[t] = forca;
            } else if (posicao == 'L') {
                laterais[t * 2] = forca;
                laterais[t * 2 + 1] = forca;
            } else if (posicao == 'Z') {
                zagueiros[t * 2] = forca;
                zagueiros[t * 2 + 1] = forca;
            } else if (posicao == 'V') {
                volantes[t * 2] = forca;
                volantes[t * 2 + 1] = forca;
            } else if (posicao == 'M') {
                meios[t * 2] = forca;
                meios[t * 2 + 1] = forca;
            } else if (posicao == 'A') {
                atacantes[t * 2] = forca;
                atacantes[t * 2 + 1] = forca;
            }
        }
    }

    float forca_ponderada[2];
    forca_ponderada[0] = (8 * goleiro[0] + 10 * (laterais[0] + laterais[1]) + 5 * (zagueiros[0] + zagueiros[1]) +
                         8 * (volantes[0] + volantes[1]) + 11 * (meios[0] + meios[1]) + 12 * (atacantes[0] + atacantes[1])) /
                        100.0;

    forca_ponderada[1] = (8 * goleiro[1] + 10 * (laterais[2] + laterais[3]) + 5 * (zagueiros[2] + zagueiros[3]) +
                         8 * (volantes[2] + volantes[3]) + 11 * (meios[2] + meios[3]) + 12 * (atacantes[2] + atacantes[3])) /
                        100.0;

    printf("%s: %.2f\n", times[0].nome, forca_ponderada[0]);
    printf("%s: %.2f\n", times[1].nome, forca_ponderada[1]);

    if (forca_ponderada[0] > forca_ponderada[1]) {
        printf("%s eh o mais forte.\n", times[0].nome);
    } else if (forca_ponderada[0] < forca_ponderada[1]) {
        printf("%s eh o mais forte.\n", times[1].nome);
    } else {
        printf("Os times tem a mesma forca.\n");
    }

    return 0;
}
