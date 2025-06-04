#include"Binary.c"
#include<time.h>

int main() {

    srand(time(NULL));
    Arv A = completa(3);
    exibe(A,0);

    return 0; 
}