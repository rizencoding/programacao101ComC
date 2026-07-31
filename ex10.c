#include <stdio.h>

int main(){
    float n1, n2 , n3;
    printf("Informe as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    float media = n1 + 4 * n2 + 2 * n3 / 7;
    printf("A média Ponderada é: %f", media);
    return 0;
}
