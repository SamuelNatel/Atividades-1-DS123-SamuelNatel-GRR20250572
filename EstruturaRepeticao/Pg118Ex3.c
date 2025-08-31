#include <stdio.h>

int main(){
    int n, i, fatorial;

    printf("Digite um valor: ");
    scanf("%d", &n);

    fatorial = 1;
    for (i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
        printf("Número: %d tem o valor fatorial: %d\n", i, fatorial);
    }

    return 0;
}