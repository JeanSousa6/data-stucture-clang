#include"Binary.c"
#include<time.h>

int main() {

Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));

Arv H = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(arv(arv(NULL, 8, NULL),6,arv(NULL,9,NULL)),3,arv(NULL, 7, NULL)));


exibe(H, 0);
printf("\n"); 
printf("Nos : %d \n " , nos(H)); 
printf("Soma : %d \n " , soma(H)); 


/*
exibe(I, 0);
 printf("\n"); 
printf("Nos : %d \n " , nos(I)); 
printf("Soma : %d \n " , soma(I)); 

*/

    return 0; 
}