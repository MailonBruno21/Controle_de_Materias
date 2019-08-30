#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "disciplina.h"

int menu();
int disciplina();

int main(){
    int i = 0;

    setlocale (LC_ALL, "");

    while(i != -1){
     i = menu();
    }
    return 0;
}

int menu(){

    int i = 0;

    system("cls");
    printf("**************-- CONTROLE DE DISCIPLINAS --**************\n");
    printf("||-----------------------------------------------------||\n");
    printf("|| [1] - HORARIO                                       ||\n");
    printf("|| [2] - DISCIPLINAS                                   ||\n");
    printf("|| [3] - PROFESSORES                                   ||\n");
    printf("|| [4] - BOLETIM                                       ||\n");
    printf("|| [5] - CALENDARIO                                    ||\n");
    printf("|| [6] - REPOSI플O                                     ||\n");
    printf("|| [7] - SAIR                                          ||\n");
    printf("||-----------------------------------------------------||\n");
    printf("||*****************************************************||\n");
    printf("\n\n---> DIGITE UMA OP플O:");
    scanf("%d", &i);

    switch (i){
        case 1:
            return 0;
        case 2:
            i = 1;
            while(i == 1){
            i = disciplina();
            }
            return 0;
        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 0;
        case 6:
            return 0;
        case 7:
            return -1;
        default:
            return 0;
    }
}

int disciplina(){
    int i = 0;

    system("cls");
    printf("********************-- DISCIPLINAS --********************\n");
    printf("||-----------------------------------------------------||\n");
    printf("|| [1] - VER DISCIPLINA                                ||\n");
    printf("|| [2] - EDITAR DISCIPLINA                             ||\n");
    printf("|| [3] - ADICIONAR DISCIPLINA                          ||\n");
    printf("|| [4] - REMOVER DISCIPLINA                            ||\n");
    printf("|| [5] - VOLTAR                                        ||\n");
    printf("||-----------------------------------------------------||\n");
    printf("||*****************************************************||\n");
    printf("\n\n---> DIGITE UMA OP플O:");
    scanf("%d", &i);

    switch (i){
        case 1:
            return 0;
        case 2:
            return 0;
        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return -1;
        default:
            printf("OP플O INVALIDA");
    }
    return 0;
}
