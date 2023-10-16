#include <stdlib.h>
#include <stdio.h>

int main(){
    char posicoes[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char jogada;
    int jogando=1, x=0, y=0, g=0;

    printf("Jogo da velha\n");
    do{ 
        if (g%2==0){
            jogada = 'X';
        }
        else{
            jogada = 'O';
        }
        printf("Digite uma posição y:"); //x é y
        scanf("%d", &x);
        printf("Digite uma posição x:"); //y é x
        scanf("%d", &y);
        if (posicoes[x][y] == ' '){
            posicoes[x][y] = jogada;
            for (int i = 0; i < 3; i++)
            {
                printf("%c | %c | %c\n", posicoes[i][0], posicoes[i][1], posicoes[i][2]);
            }
        }
        else{
            printf("Posição já ocupada\n");
        }
        if (posicoes[0][0] == posicoes[0][1] && posicoes[0][1] == posicoes[0][2] && posicoes[0][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[1][0] == posicoes[1][1] && posicoes[1][1] == posicoes[1][2] && posicoes[1][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[2][0] == posicoes[2][1] && posicoes[2][1] == posicoes[2][2] && posicoes[2][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[0][0] == posicoes[1][0] && posicoes[1][0] == posicoes[2][0] && posicoes[1][0] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[0][1] == posicoes[1][1] && posicoes[1][1] == posicoes[2][1] && posicoes[1][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[0][2] == posicoes[1][2] && posicoes[1][2] == posicoes[2][2] && posicoes[1][2] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[0][0] == posicoes[1][1] && posicoes[1][1] == posicoes[2][2] && posicoes[1][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else if (posicoes[0][2] == posicoes[1][1] && posicoes[1][1] == posicoes[2][0] && posicoes[1][1] != ' '){
            printf("Jogador %c ganhou\n", jogada);
            jogando = 0;
        }
        else{
            printf("Deu velha\n");
            jogando = 0;
        }
        g++;
    } while (jogando == 1);
    return 0;
}