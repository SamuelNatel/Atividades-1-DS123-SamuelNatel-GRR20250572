#include <stdio.h>

int main(){
    int n, i;
    double result, fatorial;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    result = 1.0;
    fatorial = 1.0;

    for (i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
        result = result + (1/fatorial);
    }

    printf("O resultado final é: %.2f", result);

    return 0;
}