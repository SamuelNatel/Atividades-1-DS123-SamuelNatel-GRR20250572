#include <stdio.h>

int main()
{
    int idade, mulheres = 0, homens = 0, mulheresComExp = 0, mulherMenorExp = 99;
    char sexo[2], servico[2];
    double numHomensExp = 0.0, homensExp = 0.0, homensMaisQuarenta = 0.0;

    do
    {
        printf("Digite a idade do candidato: ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            continue;
        }

        do
        {
            printf("Digite o seu sexo (M ou F): ");
            scanf("%1s", sexo);
            sexo[0] = toupper(sexo[0]);

            if (sexo[0] != 'M' && sexo[0] != 'F')
            {
                printf("Opção sexo %c inválido!\n");
            }
        } while (sexo[0] != 'M' && sexo[0] != 'F');

        do
        {
            printf("Digite se possui experiência no serviço (S ou N): ");
            scanf("%1s", servico);
            servico[0] = toupper(servico[0]);

            if (servico[0] != 'S' && servico[0] != 'N')
            {
                printf("Opção de experiência inválida!\n");
            }
        } while (servico[0] != 'S' && servico[0] != 'N');

        if (sexo[0] == 'M')
        {
            homens += 1;
            if (servico[0] == 'S')
            {
                numHomensExp += 1;
                homensExp += idade;
            }
            if (idade > 45)
            {
                homensMaisQuarenta += 1;
            }
        }
        else
        {
            mulheres += 1;
            if (servico[0] == 'S')
            {
                if (idade < 21)
                {
                    mulheresComExp += 1;
                }

                if (idade < mulherMenorExp)
                {
                    mulherMenorExp = idade;
                }
            }
        }
    } while (idade != 0);

    printf("A quantidade de candidatos homens é de: %d\n", homens);
    printf("A quantidade de candidatas mulheres é de: %d\n", mulheres);
    printf("A idade média de homens com experiência é de: %.2f\n", homensExp / numHomensExp);
    printf("A porcentagem de homens com mais de 45 anos é: %.2f\n", homensMaisQuarenta / homens);
    printf("O número de mulheres com idade inferior a 21 anos e com experiência é de: %d\n", mulheresComExp);
    if (mulherMenorExp == 99)
    {
        printf("Não houveram mulheres candidatas!");
    }
    else
    {
        printf("A idade com menor idade e com experiência no serviço é de: %d", mulherMenorExp);
    }

    return 0;
}