#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

typedef struct bandasMusica{
    char nome[30];
    char tipoMusica[20];
    int numIntegrantes;
    int ranking;
}bandasMusica;

bandasMusica banda[5];

void preencherBandas(bandasMusica *banda){
    int i;

    for(i=0; i<5; i++){
        printf("Banda %d\n", i+1);

        printf("Nome da Banda: ");
        gets(banda[i].nome);
        getchar();
        printf("Tipo de Musica: ");
        gets(banda[i].tipoMusica);
        getchar();
        printf("Numero de Integrantes: ");
        scanf("%d", &banda[i].numIntegrantes);
        printf("Ranking: ");
        getchar();
        scanf("%d", &banda[i].ranking);
        getchar();

        printf("\n");
    }

    system("cls");

    for(i=0; i<5; i++){
        printf("Banda %d\n", i+1);

        printf("Nome da Banda: %s\n", banda[i].nome);
        printf("Tipo de Musica: %s\n", banda[i].tipoMusica);
        printf("Numero de Integrantes: %d\n", banda[i].numIntegrantes);
        printf("Ranking: %d\n", banda[i].ranking);

        printf("\n");
    }

}

void posicaoRanking(bandasMusica *banda){
    int num;
    int i;
    printf("\n\nDigite um numero de 1 a 5: ");
    scanf("%d", &num);
    getchar();

    for(i=0; i<5; i++){
        if(banda[i].ranking == num){
            printf("\n\nInformacoes da Banda:\n");
            printf("Nome da Banda: %s\n", banda[i].nome);
            printf("Tipo de Musica: %s\n", banda[i].tipoMusica);
            printf("Numero de Integrantes: %d\n", banda[i].numIntegrantes);
            printf("Ranking: %d\n\n", banda[i].ranking);
            break;
        }
    }
}

void exibirTipoMusica(bandasMusica *banda){
    int i, j;
    char tipo[20];

    printf("\n\nDigite o tipo de musica: ");
    gets(tipo);

    /// Reescrevendo ambas as strings em caixa alta
    for(i==0; i<5; i++){
        for(j=0; j<strlen(banda[i].tipoMusica); j++){
            banda[i].tipoMusica[j] = toupper(banda[i].tipoMusica[j]);
        }
    }
    for(i==0; i<strlen(tipo); i++){
        tipo[i] = toupper(tipo[i]);
    }

    for(i=0; i<5; i++){
        if(strcmp(banda[i].tipoMusica, tipo)==0){
            printf("\nInformacoes da Banda:\n");
            printf("Nome da Banda: %s\n", banda[i].nome);
            printf("Tipo de Musica: %s\n", banda[i].tipoMusica);
            printf("Numero de Integrantes: %d\n", banda[i].numIntegrantes);
            printf("Ranking: %d\n", banda[i].ranking);
        }
    }
}

void nomeBanda(bandasMusica *banda){
    int i, j;
    char nome[30];

    printf("\n\nDigite o nome da banda: ");
    gets(nome);

    /// Reescrevendo ambas as strings em caixa alta
    for(i==0; i<5; i++){
        for(j=0; j<strlen(banda[i].nome); j++){
            banda[i].nome[j] = toupper(banda[i].nome[j]);
        }
    }
    for(i==0; i<strlen(nome); i++){
        nome[i] = toupper(nome[i]);
    }

    for(i=0; i<5; i++){
        if(strcmp(banda[i].nome, nome)==0){
            printf("\n\nA banda informada esta entre as favoritas!\n\n");
            break;
        }
    }
}

int main(){
    int i;

    preencherBandas(banda);
    posicaoRanking(banda);
    exibirTipoMusica(banda);
    nomeBanda(banda);


    system("PAUSE");
    return 0;
}

