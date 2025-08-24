#include <stdio.h>
#include <ctype.h>

int main(){
    int horasTrabalhadas, i;
    char turno[2], categoria[2], nome[50];
    double salarioMinimo = 450, valorHoraTrabalhada, salarioInicial, alimentacao;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o seu nome: ");
        scanf("%s", nome);

        printf("Digite o seu turno: (M, V, ou N) ");
        scanf("%1s", turno);
        turno[0] = toupper(turno[0]);
        if (turno[0] != 'M' && turno[0] != 'V' && turno[0] != 'N')
        {
            printf("Turno %c inválido!", turno[0]);
            return 0;
        }
        
        printf("Digite a sua categoria: (O ou G) ");
        scanf("%1s", categoria);
        categoria[0] = toupper(categoria[0]);
        if (categoria[0] != 'O' && categoria[0] != 'G')
        {
            printf("Categoria %c inválido!", categoria[0]);
            return 0;
        }

        printf("Informe o número de horas trabalhadas: ");
        scanf("%d", &horasTrabalhadas);

        if (categoria[0] == 'G')
        {
            if (turno[0] == 'N')
            {
                valorHoraTrabalhada = salarioMinimo * 0.18;
            } else {
                valorHoraTrabalhada = salarioMinimo * 0.15;
            }
        } else {
            if (turno[0] == 'N')
            {
                valorHoraTrabalhada = salarioMinimo * 0.13;
            } else {
                valorHoraTrabalhada = salarioMinimo * 0.10;
            }
        }

        salarioInicial = valorHoraTrabalhada * horasTrabalhadas;

        if (salarioInicial <= 300)
        {
            alimentacao = salarioInicial * 0.2;
        } else if (salarioInicial > 300 && salarioInicial <= 600)
        {
            alimentacao = salarioInicial * 0.15;
        } else {
            alimentacao = salarioInicial * 0.05;
        }

        printf("O funcionário %s trabalhou um total de %d hora(s), cada hora com o valor de %.2f, com o salário inicial de %.2f, com auxílio alimentação de %.2f e salário final de R$ %.2f", nome, horasTrabalhadas, valorHoraTrabalhada, salarioInicial, alimentacao, (salarioInicial + alimentacao));
    }

    return 0;
}