//exercicio 02
#include <stdio.h>

int main()
{
    int dia, mes, ano;
    int valido = 1;

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    if (ano < 0 || ano > 2025)
    {
        valido = 0;
    }

    if (mes < 1 || mes > 12)
    {
        valido = 0;
    }

    if (valido)
        {
        if (mes == 2)
        {
            if (dia < 1 || dia > 28)
            {
                valido = 0;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if (dia < 1 || dia > 30)
            {
                valido = 0;
            }
        } else
        {
            if (dia < 1 || dia > 31)
            {
                valido = 0;
            }
        }
    }

    if (valido)
    {
        printf("Data valida: %02d/%02d/%d\n", dia, mes, ano);
    } else
    {
        printf("Data invalida!\n");
    }

    return 0;
}
