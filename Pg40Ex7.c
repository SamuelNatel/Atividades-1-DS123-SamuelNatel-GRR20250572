#include <stdio.h>

int main(){
    double salario, imposto;

    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    imposto = salario * 0.1;

    printf("O salário a receber é de: %.2f", (salario + 50 - imposto));

    return 0;
}