#include <stdlib.h>
#include <stdio.h>

void soma() {
    int n1, n2, soma;
    printf("Digite um número:");
    scanf("%d", &n1);
    printf("Digite outro número:");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma é: %d! \n", soma);
    }

int main(){
    soma();
    return 0;
}
