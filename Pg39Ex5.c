#include <stdio.h>

int main(){
    double salario, aumento, porcentagem;

    printf("Informe o seu salário atual: ");
    scanf("%lf", &salario);

    printf("Digite o porcentual de aumento: ");
    scanf("%lf", &aumento);

    porcentagem = (aumento / 100) + 1;

    printf("O seu salário com aumento é de: R$%.2f", salario * porcentagem);
}