#include <stdio.h>



int prime(int n){
    if (n == 1){
        return 0;
    }

    if (n == 2){
        return 1;
    }

    if (n % 2 == 0){
        return 0;
    }

}

/*void formato_relogio(int totalSegundos, int* horas, int* minutos, int* segundos){
    horas = totalSegundos / 3600;
    totalSegundos -= horas * 3600;
    minutos = totalSegundos / 60;
    totalSegundos -= minutos * 60;
    segundos = totalSegundos;
}*/

int fatorial(int n){
    int ret = 1;
    for (int i = 1; i <= n; i++){
        ret *= i;
    }
    return (ret);
}

int fatorialRecursivo(int n){
    if (n == 1){
        return 1;
    }
    return n * fatorialRecursivo(n-1);
}

int potencia(double a, int n){
    int ret = 1;
    for (int i = 1; i <= n; i++){
        ret *= a;
    }
    return (ret);
}

int potenciaRecursiva(double a, int n){
    if (n == 0){
        return 1;
    }
    return a * potenciaRecursiva(a, n-1);
}

void ord3(int* a, int* b, int* c){
    int aux;

    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if(*a > *c){
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c){
        aux = *b;
        *b = *c;
        *c = aux;
    }
}

int euclides(int a, int b){
    if (a % b == 0){
        return b;
    }
    return euclides(b, a % b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", euclides(a,b));

    return 0;
}
