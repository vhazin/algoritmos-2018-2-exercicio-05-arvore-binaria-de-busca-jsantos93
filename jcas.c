#include <stdio.h>
#include <stdlib.h>

typedef struct {
 int valor;
 int *esquerda;
 int *direita;
 int *pai;
} no;

int CriarArvore (int info, int *esq, int *dir){
  no *raiz;
  raiz = malloc(sizeof(no));
  raiz ->valor = info;
  raiz ->esquerda = NULL;
  raiz ->direita = NULL;
}

int inserir(int info,no arvore){
  

}
int main(void) {
  
  return 0;
}
