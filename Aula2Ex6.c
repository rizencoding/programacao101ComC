#include <stdio.h>

int main(){
    int temp;
    double conversao;
    printf("Informe uma temperatura em °C: ");
    scanf("%d", &temp);
    conversao = ((temp * 9 / 5) + 32);
    printf("A temperatura eh: %f Fahrenheit",conversao);
    return 0;
}
