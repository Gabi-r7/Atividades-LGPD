#include <stdlib.h>
#include <stdio.h>
#include "opcoes.h"
int n1, n2, opcao;

int main(){
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    do{
        printf(" Escolha uma das opções a seguir: \n- 1 para trocar os valores; \n- 2 para somar os valores; \n- 3 para subtrair os valores; \n- 4 para multiplicar os valores; \n- 5 para sair; \nEscolha uma opção: ");
        scanf("%d", &opcao);
        if (opcao > 5 || opcao < 1){
            printf("\n");
            printf("\nErro!");
            printf("\n");
        }
        else if (opcao == 1){
            troca(n1, n2);
        }
        else if (opcao == 2){
            soma(n1, n2);
        }
        else if (opcao == 3){
            sub(n1, n2);
        }
        else if (opcao == 4){
            multi(n1, n2);
        }
    } while (opcao != 5);
    return 0;
}