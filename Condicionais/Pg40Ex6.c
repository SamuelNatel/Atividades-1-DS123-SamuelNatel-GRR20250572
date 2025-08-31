#include <stdio.h>

int main(){
    double salario, gratificacao, imposto;

    printf("Digite o seu salário base: ");
    scanf("%lf", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    printf("O salário a receber é de: %.2f", (salario + gratificacao - imposto));

    return 0;
}