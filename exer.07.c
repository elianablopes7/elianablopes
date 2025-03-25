#include <stdio.h>

int main()
{
    int voto;
    int votos_B = 0,votos_K = 0,votos_Z = 0,votos_nulos = 0,votos_brancos = 0,i;

    printf("Digite o voto dos 20 eleitores:\n");
    printf("1 - Candidato B\n");
    printf("2 - Candidato K\n");
    printf("3 - Candidato Z\n");
    printf("123 - Voto Nulo\n");
    printf("0 - Voto em Branco\n\n");

    i = 1;
    while (i <= 20)
        {
        printf("Voto do eleitor %d: ", i);
        if (scanf("%d", &voto) != 1)
        {
            printf("Opss invalida! Digite apenas numeros por gentileza.\n");
            while (getchar() != '\n');
            continue;
        }

        if (voto == 1)
        {
            votos_B++;
        } else if (voto == 2)
        {
            votos_K++;
        } else if (voto == 3)
        {
            votos_Z++;
        } else if (voto == 123)
        {
            votos_nulos++;
        } else if (voto == 0)
        {
            votos_brancos++;
        } else
        {
            printf("Codigo de voto invalido! Tente novamente.\n");
            continue;
        }

        i++;
    }

    printf("\nResultado da Eleicao:\n");
    printf("Candidato B: %d votos\n", votos_B);
    printf("Candidato K: %d votos\n", votos_K);
    printf("Candidato Z: %d votos\n", votos_Z);
    printf("Votos Nulos: %d\n", votos_nulos);
    printf("Votos em Branco: %d\n", votos_brancos);

    return 0;
}
