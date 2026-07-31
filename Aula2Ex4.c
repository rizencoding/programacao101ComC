#include <stdio.h>

int main(){
    int x;
    int contador;
    printf("Informe um numero: ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++){
        contador += i;
    }
    printf("A soma eh: %d",contador);
    return 0;
}
