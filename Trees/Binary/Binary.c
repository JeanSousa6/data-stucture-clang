#include<stdlib.h>
#include<stdio.h>

typedef int Item;

typedef struct arv {
    struct arv *esq;
    Item item;
    struct arv *dir;
} *Arv;



Arv arv(Arv e, Item x, Arv d) {

Arv n = malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;

}


void exibe(Arv A, int n) {
    
    if( A==NULL ) return;
    exibe(A->dir,n+1);
    printf("%*s%d\n",3*n,"",A->item);
    exibe(A->esq,n+1);

}

Arv completa(int h) {
    if( h==0 ) return NULL;
    return arv(completa(h-1), rand()%100, completa(h-1));
}

Arv balanceada(int n) {
    if (n == 0) return NULL;
    int x = rand() % 100; // valor aleatório
    int n_esq = n / 2;
    int n_dir = n - n_esq - 1;
    Arv r = malloc(sizeof(struct arv));
    r->item= x;
    r->esq = balanceada(n_esq);
    r->dir = balanceada(n_dir);
    return r;
}


Arv aleatoria(int n) {
    if (n == 0) return NULL;
    Arv r = malloc(sizeof(struct arv));
    int x = rand() % 100;
    r->item = x; 
    r->esq=balanceada(n - 1); 
    r->dir=balanceada(n - 1); 

    
    return r;
}


Arv nova_aleatoria(int n) {
    if (n == 0) return NULL; 

    Arv r = malloc(sizeof(struct arv));
  
    r->item = rand() % 100; 

    int nos_restantes = n - 1; 

    int num_esq = 0;
    if (nos_restantes > 0) {
        num_esq = rand() % (nos_restantes + 1); // rand() % (max_val + 1) para incluir max_val
    } else {
        num_esq = 0; 
    }
    
    int num_dir = nos_restantes - num_esq; // O restante vai para a direita

    r->esq = nova_aleatoria(num_esq); // Constrói recursivamente a subárvore esquerda
    r->dir = nova_aleatoria(num_dir); // Constrói recursivamente a subárvore direita

    return r;

}


int nos(Arv A){
    if(A == NULL) return 0;
    return 1 + nos(A->esq) + nos(A->dir);  
}


int soma(Arv A){
    if(A == NULL) return 0;
    return A->item + soma(A->esq) + soma(A->dir);
}

int folhas(Arv A){
   if(A == NULL) return 0;
   if(A->esq == NULL &&  A->dir == NULL) return 1;
   return folhas(A->esq) + folhas(A->dir);
}


int altura(Arv A){
    if(A == NULL) return 0; 
    if(A->esq > A->dir) return 1 + altura(A->esq); 
    else return 1 + altura(A->dir); 
}

Arv clone(Arv A){
    if(A == NULL) return NULL;
    return arv(clone(A->esq), A->item, clone(A->dir));
} 


int pertence(Item x, Arv A){
    if(A == NULL) return 0;
    return A->item == x || pertence(x, A->esq) || pertence(x, A->dir);
}

void preOrdem(Arv A){
    if(A == NULL) return;
    printf("%d ", A->item);
    preOrdem(A->esq); 
    preOrdem(A->dir); 
}


void emOrdem(Arv A){
    if(A == NULL) return;
    emOrdem(A->esq); 
    printf("%d ", A->item);
    emOrdem(A->dir); 
}

void posOrdem(Arv A){
    if(A == NULL) return;
    posOrdem(A->esq); 
    posOrdem(A->dir); 
    printf("%d ", A->item);
}
