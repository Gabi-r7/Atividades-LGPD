#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char palavra[50];

void inverteString(char palavra[]){
    int tamanho = strlen(palavra);
    for (int i = tamanho-1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int main() {
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    inverteString(palavra);
    return 0;
}