#include <stdio.h>
int main(){
    float alt, peso;
    printf("Insira suas informacoes: ");
    scanf("%f %f", &alt, &peso);
    float imc = peso / (alt * alt);
    printf("O seu imc eh: %.2f", imc);
    return 0;
}
