#include <stdio.h>
#include <stdlib.h>

int main() {
    int media[10], alunoenota[10][3], contaprov=0, contreprov=0, cont10=0, soma[10];
    
    for (int x = 0; x < 10; x++){
        printf("\n");
        for (int y = 0; y < 3; y++){
            printf("Digite o valor da %d° nota do aluno %d: ", y+1, x+1);
            scanf("%d", &alunoenota[x][y]);
            soma[x] += alunoenota[x][y];
        }
    }
    for (int x = 0; x < 10; x++){
        media[x] = soma[x] / 3;
        if (media[x] >= 6){
            contaprov++;
        }
        if (media[x] < 6){
            contreprov++;
        }
        if (media[x] == 10){
            cont10++;
        }
    }
    printf("\n%d Alunos foram aprovados!", contaprov);
    printf("\n%d Alunos foram reprovados!", contreprov);
    printf("\n%d Alunos foram aprovados com média 10!", cont10);
    return 0;
}