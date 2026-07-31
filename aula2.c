#include <stdio.h>
#include <stdbool.h>

int main(){
    float alt;
    float peso;

    printf("Informe seus dados: ");
    scanf("%f %f", &alt, &peso);
    float imc = peso / (alt * alt);

    if (imc < 18.5){
        printf("Baixo peso");
    } else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso normal");
    } else if (imc >= 25 && imc <= 29.9){
        printf("Sobrepeso");
    }else if (imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I");
    }else if (imc >= 35 && imc <= 39.9){
        printf("Obesidade grau II");
    } else {
        printf("Obesidade grau III");
    }

}
