#include <stdlib.h>
#include <stdio.h>

int multi() {
    int n1, n2, mult;
    printf("Digite um número:");
    scanf("%d", &n1);
    printf("Digite outro número:");
    scanf("%d", &n2);
    mult = n1 * n2;
    return mult;
    }

int main(){
    int mult;
    mult = multi();
    printf("A multiplicação é: %d! \n", mult);
    return 0;
}