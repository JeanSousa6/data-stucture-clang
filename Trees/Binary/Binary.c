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

