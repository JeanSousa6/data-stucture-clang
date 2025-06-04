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


void exibe(Arv A,int n) {
    
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
    r->item = rand() % 100; // valor aleatório
    r->esq = aleatoria(n - 1);
    r->dir = aleatoria(n - 1);
    return r;
}