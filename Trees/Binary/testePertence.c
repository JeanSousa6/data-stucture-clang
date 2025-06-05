#include"Binary.c"
#include<time.h>

int main() {

Arv H = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(arv(arv(NULL, 8, NULL),6,arv(NULL,9,NULL)),3,arv(NULL, 7, NULL)));


printf("Status pertence = %d \n" , pertence(4 , H));
printf("Status pertence = %d \n" , pertence(1 , H));
printf("Status pertence = %d \n" , pertence(22 , H));
printf("Status pertence = %d \n" , pertence(10 , H));
printf("Status pertence = %d \n" , pertence(8 , H));
printf("Status pertence = %d \n" , pertence(6 , H));



    return 0; 
}