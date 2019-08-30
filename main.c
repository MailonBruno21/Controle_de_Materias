#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu();

int main(){
    int i = 0;
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
    printf("|| [2] - DICIPLINAS                                    ||\n");
    printf("|| [3] - PROFESSORES                                   ||\n");
    printf("|| [4] - BOLETIM                                       ||\n");
    printf("|| [5] - CALENDARIO                                    ||\n");
    printf("|| [6] - REPOSIÇÃO                                     ||\n");
    printf("|| [7] - SAIR                                          ||\n");
    printf("||-----------------------------------------------------||\n");
    printf("||*****************************************************||\n");
    printf("\n\n---> DIGITE UMA OPÇÃO:");
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
            return 0;
        case 6:
            return 0;
        case 7:
            return -1;
        default:
            return 0;
    }
}
