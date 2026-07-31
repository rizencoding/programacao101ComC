#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int resto = x % y;
    printf("%d", resto);
    return 0;
}
