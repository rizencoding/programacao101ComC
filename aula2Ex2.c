#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b ,c, op, maior, menor, vencedor;
    double media;
    printf("Informe os valores: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Informe o numero de operacao: ");
    scanf("%d", &op);
    switch (op){
        case 1:
            vencedor = (a > b)? a : b;
            maior = (vencedor > c)? vencedor : c;
            printf("O maior eh: %d", maior);
        break;
        case 2:
            vencedor = (a < b)? a: b;
            menor = (vencedor < c)? vencedor : c;
            printf("O menor eh: %d", menor);
        break;
        case 3:
            media = (a + b + c) / 3;
            printf("A media eh: %.2f", media);
        break;
        default:
            printf("Erro");
            break;
    }
    return 0;
}
