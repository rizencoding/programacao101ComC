#include <stdio.h>

int main(){
    int a, b, c;
    printf("Informe os valores: ");
    scanf("%d %d %d", &a, &b, &c);
    int vencedor = ( a > b) ? a : b;
    int maior = (vencedor > c) ? vencedor : c;
    printf("O maior eh: %d", maior);
    return 0;
}
