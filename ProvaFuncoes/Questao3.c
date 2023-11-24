#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char senha[21], especiais[6] = {'/*', '/$', '/&', '/#', '/@'};
int tamanho, temOuNao;

void verificar(char senha[]){
    tamanho = strlen(senha);
    temOuNao = strchr(senha, especiais);
    if (tamanho > 8 && temOuNao != NULL){
        printf("Senha válida!");
    }
    else{
        main();
    }
}

int main(){
    printf("Digite uma senha válida: ");
    scanf("%s", senha);
    verificar(senha);
}