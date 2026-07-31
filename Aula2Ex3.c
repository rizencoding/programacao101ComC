#include <stdio.h>

int main(){
    int inicio = 233;
    do {
        printf(" Inicio: %d", inicio);
        if (inicio >= 300 && inicio <= 400){
            inicio += 3;
        }else {
            inicio += 5;
        }
    } while (inicio <= 457);

    return 0;
}
