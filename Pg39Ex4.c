#include <stdio.h>

int main(){
    double salario;

    printf("Informe o seu salário atual: ");
    scanf("%lf", &salario);

    printf("O seu salário com reajuste é de: R$%.2f", salario * 1.25);

    return 0;
}