#include <stdio.h>
int main(){
    int idade;
    float alt;
    int nfav;
    char inicial;

    printf("Insira suas informacoes: ");
    scanf("%d %f %d %c", &idade, &alt, &nfav, &inicial);
    printf("IDADE \t ALTURA \t NFAV \t INICIAL \n");
    printf("%d \t %.2f \t %d \t %c \n", idade, alt, nfav, inicial);
    return 0;
}
