#include <stdio.h>

int main(){
    int i, aux1 = 0, aux2 = 1, anterior = 1, result = 1;

    printf("%d\n", aux1);
    printf("%d\n", aux2);
    for(i = 0; i < 9; i++)
    {
        result = aux1 + aux2;
        printf("%d\n", result);
        aux1 = aux2;
        aux2 = result;
    }

    return 0;
}