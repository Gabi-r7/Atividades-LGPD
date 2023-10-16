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
            printf("Posição já ocupada, tente novamente:\n");
        }
        for (int i = 0; i < 3; i++)
        {
            if (posicoes[i][0] == jogada && posicoes[i][1] == jogada && posicoes[i][2] == jogada)
            {
                printf("Jogador %c ganhou\n", jogada);
                jogando = 0;
            }
            else if (posicoes[0][i] == jogada && posicoes[1][i] == jogada && posicoes[2][i] == jogada)
            {
                printf("Jogador %c ganhou\n", jogada);
                jogando = 0;
            }
            else if (posicoes[0][0] == jogada && posicoes[1][1] == jogada && posicoes[2][2] == jogada)
            {
                printf("Jogador %c ganhou\n", jogada);
                jogando = 0;
            }
            else if (posicoes[0][2] == jogada && posicoes[1][1] == jogada && posicoes[2][0] == jogada)
            {
                printf("Jogador %c ganhou\n", jogada);
                jogando = 0;
            }
            else if (posicoes[0][0] != ' ' && posicoes[0][1] != ' ' && posicoes[0][2] != ' ' && posicoes[1][0] != ' ' && posicoes[1][1] != ' ' && posicoes[1][2] != ' ' && posicoes[2][0] != ' ' && posicoes[2][1] != ' ' && posicoes[2][2] != ' '){
                printf("Deu velha\n");
            }
        }
        g++;
    } while (jogando == 1);
    return 0;
}