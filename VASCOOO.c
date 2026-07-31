#include <stdio.h>
#include <string.h>

int main(){
    int x[10];
    int y [10];
    int indice = 0;
    int elemento = 0;
    for (int i = 0; i < 10; i++){
        scanf("%d", &elemento);
        x[i] = elemento;
    }

    for (int i = 9; i >= 0; i--){
        y[i] = x[indice];
        indice++;
    }
    for(int i = 0; i<10; i++){
        printf("%d \n", x[i]);
    }
    printf("-------------------------\n");
    for(int i = 0; i<10; i++){
        printf("%d \n", y[i]);
    }
    return 0;
}
