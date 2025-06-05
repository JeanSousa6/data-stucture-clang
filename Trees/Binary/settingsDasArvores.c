#include"Binary.c"
#include<time.h>

int main() {

Arv H = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(arv(arv(NULL, 8, NULL),6,arv(NULL,9,NULL)),3,arv(NULL, 7, NULL)));


printf("Nos : %d \n " , nos(H)); 
printf("Soma : %d \n " , soma(H)); 
printf("Folhas : %d\n" , folhas(H)); 
printf("Altura : %d\n" , altura(H)); 



    return 0; 
}