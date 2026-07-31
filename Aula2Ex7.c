#include <stdio.h>

int main(){
    int a , b, op;
    float div;
    printf("Informe um numero: ");
    scanf("%d", &a);
    printf("Informe outro numero: ");
    scanf("%d", &b);
    printf("Operacoes \n");
    printf("1 - Adicao \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - divisao \n");
    printf("Informe a operacao desejada: ");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("A adicao de %d + %d eh: %d", a, b, a+b);
            break;
        case 2:
            printf("A subtracao de %d - %d eh: %d", a, b, a - b);
            break;
        case 3:
            printf("A multiplicacao de %d * %d eh: %d", a, b, a*b);
            break;
        case 4:
            if ( b == 0){
                printf("Impossivel dividir por 0!");
                break;
            }
            div = (float) a / b;
            printf("A divisao de %d / %d eh: %.2f", a, b, div);
            break;
        default:
            printf("Operacao invalida.");
            break;
    }
    return 0;
}
