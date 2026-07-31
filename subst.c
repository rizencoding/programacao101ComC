#include <stdio.h>
#include <string.h>

int main(){

    char c1, c2, str2[20];
    printf("Primeiro caractere: ");
    scanf(" %c", &c1);
    printf("Segundo semestre: ");
    scanf(" %c", &c2);
    printf("Forneca a string: ");
    scanf("%s", &str2);
    printf("A string fornecida foi: ");
    fputs(str2, stdout);
    printf("\n");
    return 0;
}
