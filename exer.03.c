//exercicio 03
#include <stdio.h>

int main()
{
    int n, i = 1, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Opps numero invalido!\nDigite um valor positivo.\n");
    } else
    {
        while (i <= n)
        {
            fatorial = fatorial * i;
            i++;
        }
        printf("\nFatorial de %d = %d\n\n", n, fatorial);
    }

    return 0;
}
