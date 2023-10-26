#include <stdlib.h>
#include <stdio.h>

void troca() {
    int n1, n2, aux;
    printf("Digite um número:");
    scanf("%d", &n1);
    printf("Digite outro número:");
    scanf("%d", &n2);
    aux = n1;
    n1 = n2;
    n2 = aux;
    printf("O primeiro número foi trocado por: %d! ", n1);
    printf("O segundo número foi trocado por: %d! \n", n2);
    }

int main(){
    troca();
    return 0;
}
