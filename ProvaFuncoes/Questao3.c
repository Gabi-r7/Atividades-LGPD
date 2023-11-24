#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int temOuNao = 0;

int verificar(char senha[51], int tamanho){
    char especiais[6] = "*$&#@";
    if (tamanho >= 8){
        for (int i = 0; i < 5; i++){
            if (strchr(senha, especiais[i]) != NULL){
                return 1;
            }
        }
    }
}

int main(){
    char senha[51]; 
    int tamanho=0;
    printf("Digite uma senha válida: ");
    scanf("%s", senha);
    tamanho = strlen(senha);
    temOuNao = verificar(senha, tamanho);
    if (temOuNao == 1){
        printf("Senha válida");
    }
    else{
        main();
    }
    return 0;
}