#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tamanho da tabela.
#define M 8191

//Quantidade de nomes lidos
#define TAM 5//10000

typedef char string[60];
typedef struct{
    char nome[30];
    char sobrenome[30];
    char completo[60];
}Nome;

typedef struct{
    int chave;
    Nome conteudo;
    Nodo *prox;
}Nodo;

int tab[M][M];
void inicializaTab () {
   tab = malloc(M * sizeof (Nodo));
   for (int h = 0; h < M; h++)
      tab[h] = NULL;
    }
}

int hash (string v, int M) { //https://www.ime.usp.br/~pf/mac0122-2002/aulas/hashing.html
   int h = v[0];
   for (int i = 1; v[i] != '\0'; i++)
      h = h * 251 + v[i];
   return h % M;
}

void inserir(Nodo nodo){
    int nodo.chave = hash(nodo.conteudo.completo);//hash do nome completo
    Nodo atual = tab[id];
    do{
        if (atual!=NULL){
            atual = atual->prox;
        }
    }while(tab[id]!=NULL);

    atual = nodo;

}

void readNomes(){
    Nome* nomes = malloc (TAM*sizeof(Nome));

    for (int x =0;x<TAM;x++){
        scanf("%s", nomes[x].nome);
        scanf("%s", nomes[x].sobrenome);
        strcpy(nomes[x].completo, nomes[x].nome);
        strcat(nomes[x].completo, " ");
        strcat(nomes[x].completo, nomes[x].sobrenome);
        //printf ("%s", nomes[x].completo);
    }
}

int main(){
    readNomes();
    return 0;
}
