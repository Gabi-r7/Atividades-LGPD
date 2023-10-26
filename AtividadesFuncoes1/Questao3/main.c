#include <stdlib.h>
#include <stdio.h>

void sub() {
    int n1, n2, sub;
    printf("Digite um número:");
    scanf("%d", &n1);
    printf("Digite outro número:");
    scanf("%d", &n2);
    sub = n1 - n2;
    printf("A subtração é: %d! \n", sub);
    }

int main(){
    sub();
    return 0;
}
