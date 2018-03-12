#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tAluno{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];

} tAluno;

tAluno gAluno[100];

unsigned int consultaAlunosPorCurso(char *curso){
    int quant=0;
    int i, j;

    /// Reescrevendo ambas as strings em caixa alta
    for(i==0; i<100; i++){
        for(j=0; j<strlen(gAluno[i].curso); j++){
            gAluno[i].curso[j] = toupper(gAluno[i].curso[j]);
        }
    }
    for(i==0; i<strlen(curso); i++){
        curso[i] = toupper(curso[i]);
    }

    for(i=0; i<100; i++){
        if(strcmp(gAluno[i].curso, curso)==0){
            quant++;
        }
    }

    return quant;
}

int main(){

    /// Aluno 1:
    strcat(gAluno[0].nome,"Tiago Maritan");
    strcat(gAluno[0].endereco,"Rua Honorio Patricio dos Santos, 207");
    strcat(gAluno[0].matricula,"12345678");
    strcat(gAluno[0].curso,"Computacao");

    /// Aluno 2:
    strcat(gAluno[1].nome,"Eduardo da Silva Melo");
    strcat(gAluno[1].endereco,"Rua Castelo Branco, 32");
    strcat(gAluno[1].matricula,"1122334455");
    strcat(gAluno[1].curso,"COMPUtacao"); /// observe a variação de caixa alta e caixa baixa

    /// Aluno 3:
    strcat(gAluno[2].nome,"Jotilde Kevin");
    strcat(gAluno[2].endereco,"Rua C");
    strcat(gAluno[2].matricula,"1010101010");
    strcat(gAluno[2].curso,"Fisica"); /// unico aluno de fisica

    printf("Quantidade de Alunos em Computacao: %d\n\n", consultaAlunosPorCurso(gAluno->curso));

    system("PAUSE");
    return 0;
}
