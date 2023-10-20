#include <stdio.h>

int main(void) {
  char certo[10], respostas[20][10], pontos=0;
  int nota[20];
  for(int l=0; l<10; l++){
    printf("Digite a resposta correta da questao %d: ", l+1);
    scanf("%s", &certo[l]);
  }
  for(int l=0; l<20; l++){
    printf("\n");
    for(int c=0; c<10; c++){
      printf("Digite a resposta do aluno %d na questao %d: ", l+1,c+1);
      scanf("%s", &respostas[l][c]);
    }
  }
  for(int l=0; l<20; l++){
    for(int c=0; c<10; c++){
      if(respostas[l][c]==certo[c]){
        pontos++;
      }
    }
    nota[l]=pontos;
    pontos=0;
    printf("\nO aluno %d tirou nota %d",l+1,nota[l]);
  }
  return 0;
}
