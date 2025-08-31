#include <stdio.h>

int main(){
    double salario, aumento;
    int anoFormatado, ano, i;

    printf("Digite o ano atual: (AAAA) ");
    scanf("%d", &anoFormatado);

    if (anoFormatado < 2007)
    {
        printf("O ano digitado é inválido!");
        return 0;
    }

    aumento = 0.015;
    salario = 1000 * (aumento + 1);

    ano = anoFormatado - 2006;

    for (i = 1; i <= ano; i++)
    {
        aumento = aumento * 2;
        salario = salario * (aumento + 1);
    }

    printf("O seu salário no ano de %d é de R$ %.2f", anoFormatado, salario);
    
    return 0;
}